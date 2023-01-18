// ScriptStruct /Script/FortniteGame.FortMangBotInfo
// Size: 0x28
struct FFortMangBotInfo : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class AFortAthenaAIBotController* BotController; // 0x10 (0x8)
	class AFortPawn* BotPawn; // 0x18 (0x8)
	enum EAlertLevel CurrentBotAlertLevel; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

