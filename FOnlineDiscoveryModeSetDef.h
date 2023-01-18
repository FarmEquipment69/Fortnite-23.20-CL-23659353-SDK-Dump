// ScriptStruct /Script/OnlineSubsystemMcp.OnlineDiscoveryModeSetDef
// Size: 0x38
struct FOnlineDiscoveryModeSetDef
{
	struct FOnlineLinkId ModeSetId; // 0x0 (0x18)
	struct FString SubModeLinkType; // 0x18 (0x10)
	struct TArray<struct FOnlineLinkId> SubModeLinkIds; // 0x28 (0x10)
};

