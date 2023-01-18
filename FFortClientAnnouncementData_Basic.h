// ScriptStruct /Script/FortniteGame.FortClientAnnouncementData_Basic
// Size: 0x120
struct FFortClientAnnouncementData_Basic : FFortClientAnnouncementData
{
	struct FSlateBrush Icon; // 0x0 (0xc0)
	struct FText TitleText; // 0xc0 (0x18)
	struct FText DetailText; // 0xd8 (0x18)
	struct FText GamepadDetailText; // 0xf0 (0x18)
	int Priority; // 0x108 (0x4)
	unsigned char unreflected_10c[0x4]; // 0x10c (0x4) 
	float DisplayTime; // 0x110 (0x4)
	unsigned char unreflected_114[0x4]; // 0x114 (0x4) 
	class USoundBase* OnStartSound; // 0x118 (0x8)
};

