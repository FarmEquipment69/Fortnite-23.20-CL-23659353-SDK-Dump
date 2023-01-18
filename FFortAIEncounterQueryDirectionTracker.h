// ScriptStruct /Script/FortniteAI.FortAIEncounterQueryDirectionTracker
// Size: 0x48
struct FFortAIEncounterQueryDirectionTracker
{
	bool bHasTriedPreviousDirections; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<struct TEnumAsByte<EFortEncounterDirection>> PreviousQueryDirections; // 0x8 (0x10)
	struct TArray<struct TEnumAsByte<EFortEncounterDirection>> ChosenDirections; // 0x18 (0x10)
	struct TArray<struct TEnumAsByte<EFortEncounterDirection>> FailedDirections; // 0x28 (0x10)
	struct TArray<struct TEnumAsByte<EFortEncounterDirection>> AvailableDirections; // 0x38 (0x10)
};

