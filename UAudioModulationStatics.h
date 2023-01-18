// Class /Script/AudioModulation.AudioModulationStatics
// Size: 0x28
class UAudioModulationStatics : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AudioModulation.AudioModulationStatics.UpdateModulator (Underlying native function: UpdateModulator 0x7a4ed80)
	static void UpdateModulator(class UObject*& WorldContextObject, class USoundModulatorBase*& Modulator); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.UpdateMixFromObject (Underlying native function: UpdateMixFromObject 0x7a4ec5c)
	static void UpdateMixFromObject(class UObject*& WorldContextObject, class USoundControlBusMix*& Mix, float& FadeTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.UpdateMixByFilter (Underlying native function: UpdateMixByFilter 0x7a4e914)
	static void UpdateMixByFilter(class UObject*& WorldContextObject, class USoundControlBusMix*& Mix, struct FString& AddressFilter, class UClass*& ParamClassFilter, class USoundModulationParameter*& ParamFilter, float& Value, float& FadeTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.UpdateMix (Underlying native function: UpdateMix 0x7a4e740)
	static void UpdateMix(class UObject*& WorldContextObject, class USoundControlBusMix*& Mix, struct TArray<struct FSoundControlBusMixStage>& Stages, float& FadeTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.SetGlobalBusMixValue (Underlying native function: SetGlobalBusMixValue 0x7a4e594)
	static void SetGlobalBusMixValue(class UObject*& WorldContextObject, class USoundControlBus*& Bus, float& Value, float& FadeTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.SaveMixToProfile (Underlying native function: SaveMixToProfile 0x7a4e484)
	static void SaveMixToProfile(class UObject*& WorldContextObject, class USoundControlBusMix*& Mix, int& ProfileIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.LoadMixFromProfile (Underlying native function: LoadMixFromProfile 0x7a4e278)
	static struct TArray<struct FSoundControlBusMixStage> LoadMixFromProfile(class UObject*& WorldContextObject, class USoundControlBusMix*& Mix, bool& bActivate, int& ProfileIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.DeactivateGenerator (Underlying native function: DeactivateGenerator 0x7a4e098)
	static void DeactivateGenerator(class UObject*& WorldContextObject, class USoundModulationGenerator*& Generator); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.DeactivateBusMix (Underlying native function: DeactivateBusMix 0x7a4dfcc)
	static void DeactivateBusMix(class UObject*& WorldContextObject, class USoundControlBusMix*& Mix); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.DeactivateBus (Underlying native function: DeactivateBus 0x7a4deac)
	static void DeactivateBus(class UObject*& WorldContextObject, class USoundControlBus*& Bus); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.CreateBusMixStage (Underlying native function: CreateBusMixStage 0x7a4dca8)
	static struct FSoundControlBusMixStage CreateBusMixStage(class UObject*& WorldContextObject, class USoundControlBus*& Bus, float& Value, float& AttackTime, float& ReleaseTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.CreateBusMix (Underlying native function: CreateBusMix 0x7a4db14)
	static class USoundControlBusMix* CreateBusMix(class UObject*& WorldContextObject, struct FName& Name, struct TArray<struct FSoundControlBusMixStage>& Stages, bool& Activate); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.CreateBus (Underlying native function: CreateBus 0x7a4d9dc)
	static class USoundControlBus* CreateBus(class UObject*& WorldContextObject, struct FName& Name, class USoundModulationParameter*& Parameter, bool& Activate); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.ClearGlobalBusMixValue (Underlying native function: ClearGlobalBusMixValue 0x7a4d8b8)
	static void ClearGlobalBusMixValue(class UObject*& WorldContextObject, class USoundControlBus*& Bus, float& FadeTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.ClearAllGlobalBusMixValues (Underlying native function: ClearAllGlobalBusMixValues 0x7a4d800)
	static void ClearAllGlobalBusMixValues(class UObject*& WorldContextObject, float& FadeTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.ActivateGenerator (Underlying native function: ActivateGenerator 0x7a4d720)
	static void ActivateGenerator(class UObject*& WorldContextObject, class USoundModulationGenerator*& Generator); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.ActivateBusMix (Underlying native function: ActivateBusMix 0x7a4d654)
	static void ActivateBusMix(class UObject*& WorldContextObject, class USoundControlBusMix*& Mix); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.ActivateBus (Underlying native function: ActivateBus 0x7a4d588)
	static void ActivateBus(class UObject*& WorldContextObject, class USoundControlBus*& Bus); // (Final | Native | Static | Public | BlueprintCallable)
};

