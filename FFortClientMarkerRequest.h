// ScriptStruct /Script/FortniteGame.FortClientMarkerRequest
// Size: 0x68
struct FFortClientMarkerRequest
{
	int InstanceID; // 0x0 (0x4)
	enum EFortWorldMarkerType MarkerType; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct FVector BasePosition; // 0x8 (0x18)
	struct FVector BasePositionOffset; // 0x20 (0x18)
	struct FVector WorldNormal; // 0x38 (0x18)
	class AActor* MarkedActor; // 0x50 (0x8)
	class UFortItemDefinition* ItemDefinition; // 0x58 (0x8)
	unsigned char bIncludeSquad; // 0x60 (0x1)
	unsigned char bUseHoveredMarkerDetail; // 0x60 (0x1)
	unsigned char bHeldMarkerInput; // 0x60 (0x1)
	enum PingCommandType PingCommand; // 0x61 (0x1)
	unsigned char padding_62[0x6]; // 0x62 (0x6)
};

