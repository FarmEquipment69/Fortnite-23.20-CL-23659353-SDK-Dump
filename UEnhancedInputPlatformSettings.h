// Class /Script/EnhancedInput.EnhancedInputPlatformSettings
// Size: 0x68
class UEnhancedInputPlatformSettings : public UPlatformSettings
{
	struct TArray<struct TWeakObjectPtr<class UClass>> InputData; // 0x40 (0x10)
	struct TArray<class UClass*> InputDataClasses; // 0x50 (0x10)
	bool bShouldLogMappingContextRedirects; // 0x60 (0x1)
	unsigned char padding_61[0x7]; // 0x61 (0x7)
};

