// Class /Script/FortSoundCueTemplates.FortSoundCueTemplateDefaultSettings
// Size: 0x80
class UFortSoundCueTemplateDefaultSettings : public UDataAsset
{
	struct TMap<class UClass*, class UFortSoundCueTemplateDefaults*> TemplateDefaults; // 0x30 (0x50)

	/* Functions */

	// Function /Script/FortSoundCueTemplates.FortSoundCueTemplateDefaultSettings.GetSettingsForTemplateType (Underlying native function: GetSettingsForTemplateType 0x7df25a8)
	class UFortSoundCueTemplateDefaults* GetSettingsForTemplateType(class UClass*& TemplateType); // (Final | Native | Public)
};

