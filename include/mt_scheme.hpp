#ifndef B71A3F0A_E5C9_48F9_B05E_1B5461AAA46E
#define B71A3F0A_E5C9_48F9_B05E_1B5461AAA46E

#include "mt_color.hpp"

namespace TOOLKIT_NAMESPACE
{
	struct ColorScheme
	{
		struct SchemeColors
		{
			RGBA normal;
			RGBA hover;
			RGBA clicked;
			RGBA focused;
			RGBA disabled;
		};
		SchemeColors background;
		SchemeColors border;
		SchemeColors font;
	};
}

// ANCHOR UI_LABEL_COLOR_SCHEME
#define UI_LABEL_COLOR_SCHEME         \
	{                                 \
		{                             \
			{0, 0, 0, 0},             \
			{0, 0, 0, 0},             \
			{0, 0, 0, 0},             \
			{0, 0, 0, 0},             \
			{204, 204, 204, 255},     \
		},                            \
			{                         \
				{0, 0, 0, 0},         \
				{0, 0, 0, 0},         \
				{0, 0, 0, 0},         \
				{0, 0, 0, 0},         \
				{191, 191, 191, 255}, \
			},                        \
			{                         \
				{0, 0, 0, 255},       \
				{0, 0, 0, 255},       \
				{0, 0, 0, 255},       \
				{0, 0, 0, 255},       \
				{131, 131, 131, 255}, \
			},                        \
	}

// ANCHOR UI_BUTTON_COLOR_SCHEME
#define UI_BUTTON_COLOR_SCHEME        \
	{                                 \
		{                             \
			{225, 225, 225, 255},     \
			{229, 241, 251, 255},     \
			{204, 228, 247, 255},     \
			{0, 0, 0, 0},             \
			{204, 204, 204, 255},     \
		},                            \
			{                         \
				{173, 173, 173, 255}, \
				{0, 120, 215, 255},   \
				{0, 84, 153, 255},    \
				{0, 0, 0, 0},         \
				{191, 191, 191, 255}, \
			},                        \
			{                         \
				{0, 0, 0, 255},       \
				{0, 0, 0, 255},       \
				{0, 0, 0, 255},       \
				{0, 0, 0, 255},       \
				{131, 131, 131, 255}, \
			},                        \
	}

// ANCHOR BUTTON_COLOR_SCHEME
#define BUTTON_COLOR_SCHEME           \
	{                                 \
		{                             \
			{240, 240, 240, 255},     \
			{218, 218, 218, 255},     \
			{96, 96, 96, 255},        \
			{0, 0, 0, 0},             \
			{204, 204, 204, 255},     \
		},                            \
			{                         \
				{0, 0, 0, 0},         \
				{0, 0, 0, 0},         \
				{0, 0, 0, 0},         \
				{0, 0, 0, 0},         \
				{191, 191, 191, 255}, \
			},                        \
			{                         \
				{96, 96, 96, 255},    \
				{0, 0, 0, 255},       \
				{255, 255, 255, 255}, \
				{0, 0, 0, 255},       \
				{131, 131, 131, 255}, \
			},                        \
	}

// ANCHOR BAR_COLOR_SCHEME
#define BAR_COLOR_SCHEME              \
	{                                 \
		{                             \
			{205, 205, 205, 255},     \
			{166, 166, 166, 255},     \
			{96, 96, 96, 255},        \
			{0, 0, 0, 0},             \
			{204, 204, 204, 255},     \
		},                            \
			{                         \
				{0, 0, 0, 0},         \
				{0, 0, 0, 0},         \
				{0, 0, 0, 0},         \
				{0, 0, 0, 0},         \
				{191, 191, 191, 255}, \
			},                        \
			{                         \
				{0, 0, 0, 255},       \
				{0, 0, 0, 255},       \
				{0, 0, 0, 255},       \
				{0, 0, 0, 255},       \
				{131, 131, 131, 255}, \
			},                        \
	}

// ANCHOR UI_TEXTINPUT_COLOR_SCHEME
#define UI_TEXTINPUT_COLOR_SCHEME     \
	{                                 \
		{                             \
			{255, 255, 255, 255},     \
			{255, 255, 255, 255},     \
			{255, 255, 255, 255},     \
			{255, 255, 255, 255},     \
			{204, 204, 204, 255},     \
		},                            \
			{                         \
				{122, 122, 122, 255}, \
				{23, 23, 23, 255},    \
				{23, 23, 23, 255},    \
				{0, 120, 215, 255},   \
				{191, 191, 191, 255}, \
			},                        \
			{                         \
				{0, 0, 0, 255},       \
				{0, 0, 0, 255},       \
				{0, 0, 0, 255},       \
				{0, 0, 0, 255},       \
				{131, 131, 131, 255}, \
			},                        \
	}

// ANCHOR UI_CHECKBOX_COLOR_SCHEME
#define UI_CHECKBOX_COLOR_SCHEME      \
	{                                 \
		{                             \
			{255, 255, 255, 255},     \
			{255, 255, 255, 255},     \
			{204, 228, 247, 255},     \
			{0, 0, 0, 0},             \
			{204, 204, 204, 255},     \
		},                            \
			{                         \
				{51, 51, 51, 255},    \
				{0, 120, 215, 255},   \
				{0, 84, 153, 255},    \
				{0, 0, 0, 0},         \
				{191, 191, 191, 255}, \
			},                        \
			{                         \
				{0, 0, 0, 255},       \
				{0, 0, 0, 255},       \
				{0, 0, 0, 255},       \
				{0, 0, 0, 255},       \
				{131, 131, 131, 255}, \
			},                        \
	}

#endif /* B71A3F0A_E5C9_48F9_B05E_1B5461AAA46E */
