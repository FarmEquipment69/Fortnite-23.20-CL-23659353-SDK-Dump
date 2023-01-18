// ScriptStruct /Script/MassEntity.MassProcessingPhaseConfig
// Size: 0x20
struct FMassProcessingPhaseConfig
{
	struct FName PhaseName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class UClass* PhaseGroupClass; // 0x8 (0x8)
	struct TArray<class UMassProcessor*> ProcessorCDOs; // 0x10 (0x10)
};

