// Class /Script/FortniteGame.FortTimeOfDayManagerInterface
// Size: 0x28
class IFortTimeOfDayManagerInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.UnregisterForWeatherComponentSetEvent (Underlying native function: UnregisterForWeatherComponentSetEvent 0x89d30c0)
	void UnregisterForWeatherComponentSetEvent(struct FDelegate& DelegateSignature); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.UnregisterForDayPhaseChangedEvent (Underlying native function: UnregisterForDayPhaseChangedEvent 0x28416bc)
	void UnregisterForDayPhaseChangedEvent(class UObject*& EventReceiver); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.SetTimeOfDaySpeedFactor (Underlying native function: SetTimeOfDaySpeedFactor 0x89d2e50)
	bool SetTimeOfDaySpeedFactor(float& NewTimeOfDaySpeedFactor, bool& bForceSet); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.SetTimeOfDaySpeed (Underlying native function: SetTimeOfDaySpeed 0x89d2db8)
	bool SetTimeOfDaySpeed(float& InTimeOfDaySpeed); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.SetTimeOfDayManagerVisibility (Underlying native function: SetTimeOfDayManagerVisibility 0x47f0b38)
	void SetTimeOfDayManagerVisibility(bool& bVisible); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.SetTimeOfDay (Underlying native function: SetTimeOfDay 0x89d2d20)
	bool SetTimeOfDay(float& InTimeOfDay); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.RegisterForWeatherComponentSetEvent (Underlying native function: RegisterForWeatherComponentSetEvent 0x2cf1c30)
	void RegisterForWeatherComponentSetEvent(struct FDelegate& DelegateSignature); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.RegisterForDayPhaseChangedEvent (Underlying native function: RegisterForDayPhaseChangedEvent 0x113be58)
	void RegisterForDayPhaseChangedEvent(struct FDelegate& DelegateSignature, bool& bMakeInitialCall); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.IsVisible (Underlying native function: IsVisible 0x89d21c8)
	bool IsVisible(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.GetWeatherComponent (Underlying native function: GetWeatherComponent 0x2f5e998)
	class UFortTimeOfDayWeatherComponent* GetWeatherComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.GetTimePerCycle (Underlying native function: GetTimePerCycle 0x89d1f0c)
	float GetTimePerCycle(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.GetTimeOfDaySpeed (Underlying native function: GetTimeOfDaySpeed 0x89d1ee4)
	float GetTimeOfDaySpeed(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.GetTimeOfDay (Underlying native function: GetTimeOfDay 0x89d1ebc)
	float GetTimeOfDay(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.GetPreviousDayPhase (Underlying native function: GetPreviousDayPhase 0x80945b0)
	enum EFortDayPhase GetPreviousDayPhase(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.GetHeightFogComponent (Underlying native function: GetHeightFogComponent 0x89d1da0)
	class UExponentialHeightFogComponent* GetHeightFogComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.GetDirectionalLightComponent (Underlying native function: GetDirectionalLightComponent 0x89d1c78)
	class UDirectionalLightComponent* GetDirectionalLightComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.GetDefaultTimeOfDaySpeed (Underlying native function: GetDefaultTimeOfDaySpeed 0x89d1bd0)
	float GetDefaultTimeOfDaySpeed(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.GetCurrentDayPhase (Underlying native function: GetCurrentDayPhase 0x89d1bac)
	enum EFortDayPhase GetCurrentDayPhase(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.FastForwardToTime_ByDuration (Underlying native function: FastForwardToTime_ByDuration 0x89d1aac)
	void FastForwardToTimeByDuration(float& FastForwardTimeOfDay, float& FastForwardDuration, float& RestoreSpeed); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTimeOfDayManagerInterface.FastForwardToTime (Underlying native function: FastForwardToTime 0x89d19ac)
	void FastForwardToTime(float& FastForwardTimeOfDay, float& FastForwardSpeed, float& RestoreSpeed); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

