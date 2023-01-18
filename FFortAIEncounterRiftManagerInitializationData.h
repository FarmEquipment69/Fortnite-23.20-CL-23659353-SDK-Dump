// ScriptStruct /Script/FortniteAI.FortAIEncounterRiftManagerInitializationData
// Size: 0x130
struct FFortAIEncounterRiftManagerInitializationData
{
	class UFortAIEncounterInfo* EncounterInfo; // 0x0 (0x8)
	struct FFortEncounterSettings EncounterSettings; // 0x8 (0xc0)
	struct FEncounterEnvironmentQueryInfo CurrentEnvironmentQueryInfo; // 0xc8 (0x28)
	struct FEncounterEnvironmentQueryInfo FallbackEnvironmentQueryInfo; // 0xf0 (0x28)
	class UClass* RiftClassTemplate; // 0x118 (0x8)
	int NumRiftsToUse; // 0x120 (0x4)
	int MinRiftsToUse; // 0x124 (0x4)
	float UpdateIntervalTimeSeconds; // 0x128 (0x4)
	unsigned char padding_12c[0x4]; // 0x12c (0x4)
};

