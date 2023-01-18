// ScriptStruct /Script/FortniteGame.FortHelpAdditionalContent
// Size: 0xe0
struct FFortHelpAdditionalContent
{
	enum EFortHelpContentLocation ContentLocation; // 0x0 (0x1)
	bool ShowAdditionalImage; // 0x1 (0x1)
	unsigned char unreflected_2[0xe]; // 0x2 (0xe) 
	struct FSlateBrush ImageToDisplay; // 0x10 (0xc0)
	bool ShowAdditionalWidget; // 0xd0 (0x1)
	unsigned char unreflected_d1[0x7]; // 0xd1 (0x7) 
	class UClass* WidgetToDisplay; // 0xd8 (0x8)
};

