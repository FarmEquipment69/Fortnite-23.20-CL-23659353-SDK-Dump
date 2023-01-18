// ScriptStruct /Script/NetworkPrediction.NetworkPredictionDevHUDItem
// Size: 0x28
struct FNetworkPredictionDevHUDItem
{
	struct FString DisplayName; // 0x0 (0x10)
	struct FString ExecCommand; // 0x10 (0x10)
	bool bAutoBack; // 0x20 (0x1)
	bool bRequirePIE; // 0x21 (0x1)
	bool bRequireNotPIE; // 0x22 (0x1)
	unsigned char padding_23[0x5]; // 0x23 (0x5)
};

