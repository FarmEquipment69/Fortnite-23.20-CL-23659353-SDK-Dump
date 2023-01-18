// Class /Script/FortniteGame.CaptureComponent
// Size: 0x320
class UCaptureComponent : public USceneComponent
{
	struct FMulticastInlineDelegate OnCaptureStateChanged; // 0x2a0 (0x10)
	struct FMulticastInlineDelegate OnCaptureProgressUpdate; // 0x2b0 (0x10)
	struct FMulticastInlineDelegate OnOwningTeamChanged; // 0x2c0 (0x10)
	float OldSmoothedProgress; // 0x2d0 (0x4)
	float SmoothedProgress; // 0x2d4 (0x4)
	float SmoothProgressTimer; // 0x2d8 (0x4)
	float ProgressDecaySpeed; // 0x2dc (0x4)
	float ProgressReverseSpeed; // 0x2e0 (0x4)
	int CurrentCaptureSpeed; // 0x2e4 (0x4)
	float CaptureSpeedBoost; // 0x2e8 (0x4)
	float CaptureSpeedBoostEmoting; // 0x2ec (0x4)
	int NeutralizingTime; // 0x2f0 (0x4)
	int DeneutralizingSpeed; // 0x2f4 (0x4)
	float CaptureTime; // 0x2f8 (0x4)
	float CaptureTimeCurrent; // 0x2fc (0x4)
	enum ECaptureState PreviousCaptureState; // 0x300 (0x1)
	unsigned char CapturingStateOwner; // 0x301 (0x1)
	unsigned char NeutralizingStateOwner; // 0x302 (0x1)
	unsigned char StateOwner; // 0x303 (0x1)
	unsigned char OwningTeam; // 0x304 (0x1)
	enum ECaptureState CaptureState; // 0x305 (0x1)
	unsigned char unreflected_306[0x2]; // 0x306 (0x2) 
	float CaptureProgress; // 0x308 (0x4)
	enum ESmoothProgressState SmoothProgressState; // 0x30c (0x1)
	unsigned char padding_30d[0x13]; // 0x30d (0x13)

	/* Functions */

	// Function /Script/FortniteGame.CaptureComponent.UpdateSmoothProgressStateByCaptureState (Underlying native function: UpdateSmoothProgressStateByCaptureState 0x8763938)
	void UpdateSmoothProgressStateByCaptureState(); // (Final | Native | Private)

	// Function /Script/FortniteGame.CaptureComponent.UpdateProgressReverseSpeed (Underlying native function: UpdateProgressReverseSpeed 0x8763870)
	void UpdateProgressReverseSpeed(int& NumOfPlayers, int& NumOfEmotingPlayers); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CaptureComponent.UpdateCaptureSpeed (Underlying native function: UpdateCaptureSpeed 0x76c12f0)
	void UpdateCaptureSpeed(int& NumOfPlayers, int& NumOfEmotingPlayers); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CaptureComponent.SetProgressDecaySpeed (Underlying native function: SetProgressDecaySpeed 0x71a7128)
	void SetProgressDecaySpeed(float& NewProgressDecaySpeed); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CaptureComponent.SetNeutralizingTime (Underlying native function: SetNeutralizingTime 0x8762f80)
	void SetNeutralizingTime(int& NewNeutralizingSpeed); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CaptureComponent.SetCaptureTime (Underlying native function: SetCaptureTime 0x8762b70)
	void SetCaptureTime(float& NewCaptureTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CaptureComponent.SetCaptureState (Underlying native function: SetCaptureState 0x8762acc)
	void SetCaptureState(enum ECaptureState& NewCaptureState, unsigned char& TriggerTeamIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CaptureComponent.SetCaptureSpeedBoostEmoting (Underlying native function: SetCaptureSpeedBoostEmoting 0x71a7128)
	void SetCaptureSpeedBoostEmoting(float& NewCaptureSpeedBoostEmoting); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CaptureComponent.SetCaptureSpeedBoost (Underlying native function: SetCaptureSpeedBoost 0x71a7128)
	void SetCaptureSpeedBoost(float& NewCaptureSpeedBoost); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CaptureComponent.OnRep_SmoothProgressState (Underlying native function: OnRep_SmoothProgressState 0x87620e4)
	void OnRepSmoothProgressState(); // (Final | Native | Private)

	// Function /Script/FortniteGame.CaptureComponent.OnRep_OwningTeam (Underlying native function: OnRep_OwningTeam 0x876200c)
	void OnRepOwningTeam(unsigned char& PreviousOwningTeam); // (Final | Native | Private)

	// Function /Script/FortniteGame.CaptureComponent.OnRep_CaptureState (Underlying native function: OnRep_CaptureState 0x8761f8c)
	void OnRepCaptureState(enum ECaptureState& OldCaptureState); // (Final | Native | Private)

	// Function /Script/FortniteGame.CaptureComponent.OnRep_CaptureProgress (Underlying native function: OnRep_CaptureProgress 0x8761f78)
	void OnRepCaptureProgress(); // (Final | Native | Private)

	// Function /Script/FortniteGame.CaptureComponent.GetCaptureStateOwner (Underlying native function: GetCaptureStateOwner 0x87600a0)
	unsigned char GetCaptureStateOwner(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CaptureComponent.GetCaptureState (Underlying native function: GetCaptureState 0x8760088)
	enum ECaptureState GetCaptureState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CaptureComponent.ForceCaptureProgress (Underlying native function: ForceCaptureProgress 0x71a7128)
	void ForceCaptureProgress(float& NewCaptureProgress); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

