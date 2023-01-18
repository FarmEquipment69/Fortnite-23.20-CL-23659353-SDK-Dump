// Class /Script/CommonUILegacy.CommonVisibilityWidgetLegacy
// Size: 0x300
class UCommonVisibilityWidgetLegacy : public UCommonBorder
{
	bool bShowForGamepad; // 0x2f0 (0x1)
	bool bShowForMouseAndKeyboard; // 0x2f1 (0x1)
	bool bShowForTouch; // 0x2f2 (0x1)
	bool bShowForPC; // 0x2f3 (0x1)
	bool bShowForMac; // 0x2f4 (0x1)
	bool bShowForPS4; // 0x2f5 (0x1)
	bool bShowForPS5; // 0x2f6 (0x1)
	bool bShowForXBox; // 0x2f7 (0x1)
	bool bShowForXSX; // 0x2f8 (0x1)
	bool bShowForIOS; // 0x2f9 (0x1)
	bool bShowForAndroid; // 0x2fa (0x1)
	bool bShowForErebus; // 0x2fb (0x1)
	enum ESlateVisibility VisibleType; // 0x2fc (0x1)
	enum ESlateVisibility HiddenType; // 0x2fd (0x1)
	unsigned char padding_2fe[0x2]; // 0x2fe (0x2)
};

