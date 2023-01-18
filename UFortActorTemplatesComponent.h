// Class /Script/FortniteGame.FortActorTemplatesComponent
// Size: 0x148
class UFortActorTemplatesComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	class UActorTemplateResources* TemplateResources; // 0xa8 (0x8)
	unsigned char padding_b0[0x98]; // 0xb0 (0x98)

	/* Functions */

	// Function /Script/FortniteGame.FortActorTemplatesComponent.UpdateTemplateID (Underlying native function: UpdateTemplateID 0x8786514)
	void UpdateTemplateID(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortActorTemplatesComponent.UpdateDeviceProperties (Underlying native function: UpdateDeviceProperties 0x87862ac)
	void UpdateDeviceProperties(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortActorTemplatesComponent.SetDynamicOptions (Underlying native function: SetDynamicOptions 0x87846b4)
	void SetDynamicOptions(struct TArray<struct FDynamicTemplateOption>& Options); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortActorTemplatesComponent.SetDynamicOption (Underlying native function: SetDynamicOption 0x87845a4)
	void SetDynamicOption(struct FName& OptionName, struct TArray<class UObject*>& Objects); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortActorTemplatesComponent.OnPropertiesLoaded (Underlying native function: OnPropertiesLoaded 0x8782e40)
	void OnPropertiesLoaded(); // (Final | Native | Private)
};

