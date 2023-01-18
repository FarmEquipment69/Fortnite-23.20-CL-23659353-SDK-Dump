// ScriptStruct /Script/NetworkPrediction.NetworkPredictionDevHUD
// Size: 0x28
struct FNetworkPredictionDevHUD
{
	struct FString HUDName; // 0x0 (0x10)
	struct TArray<struct FNetworkPredictionDevHUDItem> Items; // 0x10 (0x10)
	bool bRequirePIE; // 0x20 (0x1)
	bool bRequireNotPIE; // 0x21 (0x1)
	unsigned char padding_22[0x6]; // 0x22 (0x6)
};

