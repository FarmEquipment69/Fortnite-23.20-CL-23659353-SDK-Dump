// Class /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0xa8
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
	struct TEnumAsByte<EFieldResolutionType> ResolutionType; // 0xa0 (0x1)
	unsigned char padding_a1[0x7]; // 0xa1 (0x7)

	/* Functions */

	// Function /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType (Underlying native function: SetMetaDataaProcessingResolutionType 0x99a43cc)
	class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(struct TEnumAsByte<EFieldResolutionType>& ResolutionType); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

