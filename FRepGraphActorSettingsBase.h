// ScriptStruct /Script/FortniteGame.RepGraphActorSettingsBase
// Size: 0x90
struct FRepGraphActorSettingsBase
{
	unsigned char bAddClassRepInfoToMap; // 0x0 (0x1)
	unsigned char bUseCustomClassRepInfo; // 0x0 (0x1)
	unsigned char bAddToExplicitCSVStatTracker; // 0x0 (0x1)
	unsigned char bAddToImplicitCSVStatTracker; // 0x0 (0x1)
	unsigned char bAddToRPCMulticastOpenChannelForClassMap; // 0x0 (0x1)
	unsigned char bRPCMulticastOpenChannelForClass; // 0x0 (0x1)
	struct TEnumAsByte<EClassRepNodeMapping> ClassNodeMapping; // 0x1 (0x1)
	unsigned char unreflected_2[0xe]; // 0x2 (0xe) 
	struct FClassReplicationInfo ClassRepInfo; // 0x10 (0x70)
	struct FName CSVStatNamePrefix; // 0x80 (0x4)
	unsigned char padding_84[0xc]; // 0x84 (0xc)
};

