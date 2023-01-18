// ScriptStruct /Script/CommonUILegacy.Operation
// Size: 0x28
struct FOperation
{
	enum EOperation Operation; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class UCommonActivatablePanelLegacy* Panel; // 0x8 (0x8)
	bool bIntroPanel; // 0x10 (0x1)
	bool bActivatePanel; // 0x11 (0x1)
	bool bOutroPanelBelow; // 0x12 (0x1)
	unsigned char padding_13[0x15]; // 0x13 (0x15)
};

