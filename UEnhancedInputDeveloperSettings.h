// Class /Script/EnhancedInput.EnhancedInputDeveloperSettings
// Size: 0x98
class UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars
{
	bool bEnableDefaultMappingContexts; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TArray<struct FDefaultContextSetting> DefaultMappingContexts; // 0x38 (0x10)
	struct TArray<struct FDefaultContextSetting> DefaultWorldSubsystemMappingContexts; // 0x48 (0x10)
	struct TWeakObjectPtr<class UClass> DefaultWorldInputClass; // 0x58 (0x28)
	struct FPerPlatformSettings PlatformSettings; // 0x80 (0x10)
	bool bShouldOnlyTriggerLastActionInChord; // 0x90 (0x1)
	bool bEnableWorldSubsystem; // 0x91 (0x1)
	unsigned char bShouldLogAllWorldSubsystemInputs; // 0x92 (0x1)
	unsigned char padding_93[0x5]; // 0x93 (0x5)
};

