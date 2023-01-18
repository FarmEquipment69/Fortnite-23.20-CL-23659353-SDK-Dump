// Class /Script/FortSoundCueTemplates.FortSoundCueTemplateSettings
// Size: 0x58
class UFortSoundCueTemplateSettings : public UDeveloperSettings
{
	struct TWeakObjectPtr<class UFortSoundCueTemplateDefaultSettings> DefaultTemplateSettings; // 0x30 (0x28)

	/* Functions */

	// Function /Script/FortSoundCueTemplates.FortSoundCueTemplateSettings.GetDefaultSettingsForTemplateType (Underlying native function: GetDefaultSettingsForTemplateType 0x7df2504)
	class UFortSoundCueTemplateDefaults* GetDefaultSettingsForTemplateType(class UClass*& TemplateType); // (Final | Native | Public | Const)
};

