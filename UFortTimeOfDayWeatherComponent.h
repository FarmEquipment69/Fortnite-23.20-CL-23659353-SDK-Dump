// Class /Script/FortniteGame.FortTimeOfDayWeatherComponent
// Size: 0x218
class UFortTimeOfDayWeatherComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x20]; // 0xa0 (0x20) 
	struct TArray<struct FGlobalWeatherData> GlobalWeatherDataArray; // 0xc0 (0x10)
	struct FScalableFloat WeatherEventStartDelayMin; // 0xd0 (0x28)
	struct FScalableFloat WeatherEventStartDelayMax; // 0xf8 (0x28)
	struct FScalableFloat WeatherEventEndedCooldownMin; // 0x120 (0x28)
	struct FScalableFloat WeatherEventEndedCooldownMax; // 0x148 (0x28)
	struct FScalableFloat DisableWeather; // 0x170 (0x28)
	enum EAthenaGamePhase GamePhaseToStart; // 0x198 (0x1)
	bool bWeatherDisabled; // 0x199 (0x1)
	unsigned char unreflected_19a[0x1]; // 0x19a (0x1) 
	bool bWeatherStarted; // 0x19b (0x1)
	unsigned char unreflected_19c[0xc]; // 0x19c (0xc) 
	struct FString CalendarEnableEvent; // 0x1a8 (0x10)
	enum EGlobalWeatherState WeatherState; // 0x1b8 (0x1)
	unsigned char unreflected_1b9[0x3]; // 0x1b9 (0x3) 
	float WeatherStartTime; // 0x1bc (0x4)
	float WeatherEventAttemptStart; // 0x1c0 (0x4)
	struct FFortReplicatedWeatherEventData WeatherEventData; // 0x1c4 (0x14)
	int LocalWeatherEventIndex; // 0x1d8 (0x4)
	float CurrentBlendTime; // 0x1dc (0x4)
	float TargetBlendTime; // 0x1e0 (0x4)
	float BlendTimeLength; // 0x1e4 (0x4)
	class UPostProcessComponent* PostProcessComponent; // 0x1e8 (0x8)
	unsigned char unreflected_1f0[0x18]; // 0x1f0 (0x18) 
	struct FMulticastInlineDelegate OnWeatherChanged; // 0x208 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortTimeOfDayWeatherComponent.OnRep_WeatherEventData (Underlying native function: OnRep_WeatherEventData 0x871b5e8)
	void OnRepWeatherEventData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortTimeOfDayWeatherComponent.OnPlaylistLoaded (Underlying native function: OnPlaylistLoaded 0x871b338)
	void OnPlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortTimeOfDayWeatherComponent.IsWeatherEventActive (Underlying native function: IsWeatherEventActive 0x871ad60)
	bool IsWeatherEventActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayWeatherComponent.GetWeatherState (Underlying native function: GetWeatherState 0x733c3cc)
	enum EGlobalWeatherState GetWeatherState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayWeatherComponent.GetCurrentWindStrength (Underlying native function: GetCurrentWindStrength 0x2d00a0c)
	float GetCurrentWindStrength(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayWeatherComponent.GetCurrentWindDirection (Underlying native function: GetCurrentWindDirection 0x8719e30)
	struct FVector GetCurrentWindDirection(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayWeatherComponent.GetCurrentWeatherIntensity (Underlying native function: GetCurrentWeatherIntensity 0x8719dfc)
	float GetCurrentWeatherIntensity(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayWeatherComponent.GetCurrentWeatherEventIndex (Underlying native function: GetCurrentWeatherEventIndex 0x8719de4)
	int GetCurrentWeatherEventIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayWeatherComponent.GetBlendTimePercentage (Underlying native function: GetBlendTimePercentage 0x8719c28)
	float GetBlendTimePercentage(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

