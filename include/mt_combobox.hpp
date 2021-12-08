#ifndef BB5DE797_DB7E_4395_ACCD_25EE508CE326
#define BB5DE797_DB7E_4395_ACCD_25EE508CE326

#include <map>

#include "mt_application.hpp"
#include "mt_window.hpp"
#include "mt_widget.hpp"
#include "mt_textbox.hpp"
#include "mt_button.hpp"

class Mt_comboBox : public Mt_widget
{
private:
	std::map<std::string, Mt_button &> options;

	bool show = false;

	Mt_comboBox(Mt_window &window, int x, int y, int w, int h) : Mt_widget(window, x, y, w, h)
	{
		textbox = &Mt_textbox::create(*this);
		textbox->geometry->normalize();

		button = &Mt_button::create(*this);
		button->label->text = "\u25BC";
		button->function = [this]()
		{
			show = !show;
		};

		updatePosition();
	}
	Mt_comboBox(const Mt_comboBox &) = delete;

public:
	static Mt_comboBox &create(Mt_window &window, int x, int y, int w, int h) { return *(new Mt_comboBox(window, x, y, w, h)); }

	~Mt_comboBox()
	{
		Debug("Destroying comboBox");
		delete textbox;
		delete button;
	}

	Mt_textbox *textbox = nullptr;
	Mt_button *button = nullptr;

	void addOption(const std::string &string)
	{
		auto &button = Mt_button::create(*this);

		button.label->text = string;

		button.geometry->setW(geometry->getW());

		options.emplace(string, button);
	}

	void updatePosition()
	{
		textbox->geometry->destR.x = geometry->destR.x;
		textbox->geometry->destR.y = geometry->destR.y;
		textbox->geometry->destR.w = geometry->getW() - geometry->getH();
		textbox->geometry->destR.h = geometry->getH();

		button->geometry->destR.x = geometry->destR.x + textbox->geometry->destR.w;
		button->geometry->destR.y = geometry->destR.y;
		button->geometry->destR.w = button->geometry->destR.h = geometry->getH();
	}
	void updateOptions()
	{
		int prev_y = geometry->destR.y + geometry->getH();
		// for (size_t i = 0; i < options.size(); ++i)
		for (auto option : options)
		{
			auto &button = option.second;

			button.geometry->destR.x = geometry->destR.x;
			button.geometry->destR.y = prev_y;

			button.fitH();
			button.geometry->normalize();

			prev_y = button.geometry->destR.y + button.geometry->destR.h;
		}
	}

	std::string option()
	{
		return textbox->str();
	}

	void handleEvent() override
	{
		return_if(!visible);

		textbox->handleEvent();
		button->handleEvent();
		if (show)
		{
			for (auto btn : options)
			{
				btn.second.handleEvent();
			}
		}
	}
	void update() override
	{
		return_if(!visible);

		textbox->update();
		button->update();

		updatePosition();
		updateOptions();

		if (show && !options.empty())
		{
			Mt_vector<int> mouse(Mt_vector<int>::mousePos());
			auto &last = std::prev(options.end())->second;
			int x = geometry->destR.x;
			int y = geometry->destR.y;
			int w = geometry->destR.w;
			int h = (last.geometry->destR.y + last.geometry->destR.h) - y;
			if (mouse.x >= x + w || mouse.x < x ||
				mouse.y >= y + h || mouse.y < y)
			{
				if (window.event.type == SDL_MOUSEBUTTONDOWN)
				{
					switch (window.event.button.button)
					{
					case SDL_BUTTON_LEFT:
						show = false;
						break;
					}
				}
			}
			for (auto btn : options)
			{
				btn.second.update();
				if (btn.second.actioned())
				{
					window.hovering = nullptr;
					textbox->str(btn.first);
					show = false;
				}
			}
		}
	}
	void draw() override
	{
		return_if(!visible);

		textbox->draw();
		button->draw();
		if (show)
		{
			for (auto btn : options)
			{
				btn.second.draw();
			}
		}
	}
};

#endif /* BB5DE797_DB7E_4395_ACCD_25EE508CE326 */
