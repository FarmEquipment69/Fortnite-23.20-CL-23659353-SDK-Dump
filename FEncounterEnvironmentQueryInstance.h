// ScriptStruct /Script/FortniteAI.EncounterEnvironmentQueryInstance
// Size: 0x58
struct FEncounterEnvironmentQueryInstance
{
	struct FEncounterEnvironmentQueryInfo EnvironmentQueryInfo; // 0x0 (0x28)
	int QueryID; // 0x28 (0x4)
	bool bIsWaitingForQueryResults; // 0x2c (0x1)
	struct TEnumAsByte<EFortEncounterDirection> ChosenDirection; // 0x2d (0x1)
	unsigned char unreflected_2e[0x2]; // 0x2e (0x2) 
	struct TArray<struct FVector> QueryLocations; // 0x30 (0x10)
	struct TArray<class ABuildingRift*> FoundRifts; // 0x40 (0x10)
	int NumTimesUsed; // 0x50 (0x4)
	unsigned char padding_54[0x4]; // 0x54 (0x4)
};

