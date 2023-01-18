// ScriptStruct /Script/MassEntity.MassProcessingPhase
// Size: 0x78
struct FMassProcessingPhase : FTickFunction
{
	class UMassCompositeProcessor* PhaseProcessor; // 0x28 (0x8)
	class UMassProcessingPhaseManager* PhaseManager; // 0x30 (0x8)
	unsigned char padding_38[0x40]; // 0x38 (0x40)
};

