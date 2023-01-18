// ScriptStruct /Script/FortniteGame.FortWorldMarkerData
// Size: 0x160
struct FFortWorldMarkerData : FFastArraySerializerItem
{
	struct FMarkerID* MarkerID; // 0xc (0x8)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	class AFortPlayerState* Owner; // 0x18 (0x8)
	enum EFortWorldMarkerType MarkerType; // 0x20 (0x1)
	unsigned char unreflected_21[0x7]; // 0x21 (0x7) 
	struct FVector BasePosition; // 0x28 (0x18)
	struct FVector BasePositionOffset; // 0x40 (0x18)
	struct FVector WorldNormal; // 0x58 (0x18)
	class UFortItemDefinition* ItemDefinition; // 0x70 (0x8)
	int ItemCount; // 0x78 (0x4)
	struct TWeakObjectPtr<class AActor> MarkedActor; // 0x7c (0x8)
	unsigned char unreflected_84[0x4]; // 0x84 (0x4) 
	struct TWeakObjectPtr<class UClass> MarkedActorClass; // 0x88 (0x28)
	bool bIncludeSquad; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x3]; // 0xb1 (0x3) 
	struct FGameplayTag MarkerTag; // 0xb4 (0x4)
	enum PingCommandType PingCommand; // 0xb8 (0x1)
	unsigned char bHasCustomDisplayInfo; // 0xb9 (0x1)
	unsigned char bHeldMarkerInput; // 0xb9 (0x1)
	bool bUseHoveredMarkerDetail; // 0xba (0x1)
	unsigned char unreflected_bb[0x5]; // 0xbb (0x5) 
	struct FMarkedActorDisplayInfo CustomDisplayInfo; // 0xc0 (0x98)
	class UFortWorldMarker* MarkerInstance; // 0x158 (0x8)
};

