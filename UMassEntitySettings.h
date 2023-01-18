// Class /Script/MassEntity.MassEntitySettings
// Size: 0x110
class UMassEntitySettings : public UMassModuleSettings
{
	struct FString DumpDependencyGraphFileName; // 0x28 (0x10)
	struct FMassProcessingPhaseConfig ProcessingPhasesConfig[0x6]; // 0x38 (0x20) (ARRAY) 
	struct TArray<class UMassProcessor*> ProcessorCDOs; // 0xf8 (0x10)
	unsigned char padding_108[0x8]; // 0x108 (0x8)
};

