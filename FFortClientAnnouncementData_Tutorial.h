// ScriptStruct /Script/FortniteGame.FortClientAnnouncementData_Tutorial
// Size: 0x170
struct FFortClientAnnouncementData_Tutorial : FFortClientAnnouncementData_Basic
{
	float AutoContinueDelay; // 0x120 (0x4)
	unsigned char unreflected_124[0x4]; // 0x124 (0x4) 
	struct FText NameText; // 0x128 (0x18)
	struct FText SystemText; // 0x140 (0x18)
	bool bButtonEnabled; // 0x158 (0x1)
	bool bLightboxEnabled; // 0x159 (0x1)
	bool bLightboxDisableInputOnly; // 0x15a (0x1)
	unsigned char unreflected_15b[0x1]; // 0x15b (0x1) 
	struct FMargin Padding; // 0x15c (0x10)
	struct TEnumAsByte<EVerticalAlignment> VAlign; // 0x16c (0x1)
	struct TEnumAsByte<EHorizontalAlignment> HAlign; // 0x16d (0x1)
	unsigned char padding_16e[0x2]; // 0x16e (0x2)
};

