// ScriptStruct /Script/FortniteAI.PlayerLODViewConeConfig
// Size: 0x80
struct FPlayerLODViewConeConfig
{
	struct FScalableFloat ObserverVisionAngleDeg; // 0x0 (0x28)
	struct FScalableFloat ViewConeMaxRadius; // 0x28 (0x28)
	struct FScalableFloat AlwaysVisibleRadius; // 0x50 (0x28)
	enum EFortAILODLevel FortAILODLevel; // 0x78 (0x1)
	unsigned char padding_79[0x7]; // 0x79 (0x7)
};

