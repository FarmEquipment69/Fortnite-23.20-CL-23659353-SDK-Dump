// ScriptStruct /Script/FortniteGame.BeginGroupTeleportParams
// Size: 0x28
struct FBeginGroupTeleportParams
{
	struct FText HUDReasonText; // 0x0 (0x18)
	bool bRespawnPlayers; // 0x18 (0x1)
	bool bForceKillPlayers; // 0x19 (0x1)
	bool bAutoReleaseFromStasis; // 0x1a (0x1)
	unsigned char unreflected_1b[0x1]; // 0x1b (0x1) 
	float FadeTime; // 0x1c (0x4)
	enum ESynchronizedTeleportHealthAndShieldResetType HealthAndShieldResetType; // 0x20 (0x1)
	bool bResetPlayerInventories; // 0x21 (0x1)
	bool bRandomizePlayerInventories; // 0x22 (0x1)
	bool bReinitializePlayerAbilities; // 0x23 (0x1)
	bool bBlockPickupsDuringTeleport; // 0x24 (0x1)
	bool bFadeSound; // 0x25 (0x1)
	unsigned char padding_26[0x2]; // 0x26 (0x2)
};

