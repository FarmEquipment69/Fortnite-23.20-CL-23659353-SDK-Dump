// ScriptStruct /Script/FortniteGame.PortalMatchmakingData
// Size: 0x2f0
struct FPortalMatchmakingData
{
	class AFortPawn* LastInteractionPawn; // 0x0 (0x8)
	class UFortControllerComponent_Portal* ControllerComponentPortal; // 0x8 (0x8)
	class UFortPortalComponent* PortalComponent; // 0x10 (0x8)
	struct FCreativeLoadedLinkData IslandLinkData; // 0x18 (0x2d0)
	bool bIsPrivateMatch; // 0x2e8 (0x1)
	unsigned char padding_2e9[0x7]; // 0x2e9 (0x7)
};

