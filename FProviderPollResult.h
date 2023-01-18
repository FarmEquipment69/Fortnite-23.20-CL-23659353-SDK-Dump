// ScriptStruct /Script/LiveLink.ProviderPollResult
// Size: 0x40
struct FProviderPollResult
{
	struct FString Name; // 0x10 (0x10)
	struct FString MachineName; // 0x20 (0x10)
	double MachineTimeOffset; // 0x30 (0x8)
	bool bIsValidProvider; // 0x38 (0x1)
	unsigned char padding_39[0x7]; // 0x39 (0x7)
};

