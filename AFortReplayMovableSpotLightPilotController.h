// Class /Script/FortniteGame.FortReplayMovableSpotLightPilotController
// Size: 0x8b0
class AFortReplayMovableSpotLightPilotController : public APlayerController
{
	bool bMovingAllLights; // 0x848 (0x1)
	bool bColorSelectMode; // 0x849 (0x1)
	unsigned char unreflected_84a[0x2]; // 0x84a (0x2) 
	float Hue; // 0x84c (0x4)
	float Saturation; // 0x850 (0x4)
	float Value; // 0x854 (0x4)
	float ColorInputX; // 0x858 (0x4)
	float ColorInputY; // 0x85c (0x4)
	class UInputComponent* LightColorSelectComponent; // 0x860 (0x8)
	unsigned char unreflected_868[0x20]; // 0x868 (0x20) 
	class AFortReplayMovableSpotLight* PendingCurrentSpotLight; // 0x888 (0x8)
	class AFortPlayerController* OriginalControllerRef; // 0x890 (0x8)
	class ULocalPlayer* OriginalPlayer; // 0x898 (0x8)
	float TimeAccumulator; // 0x8a0 (0x4)
	float InitialMaxSpeed; // 0x8a4 (0x4)
	float InitialAccel; // 0x8a8 (0x4)
	float InitialDecel; // 0x8ac (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortReplayMovableSpotLightPilotController.ToggleLockReplaySpotLight (Underlying native function: ToggleLockReplaySpotLight 0x8e49ec8)
	void ToggleLockReplaySpotLight(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortReplayMovableSpotLightPilotController.SpawnReplaySpotLightEx (Underlying native function: SpawnReplaySpotLightEx 0x8d40358)
	void SpawnReplaySpotLightEx(float& X, float& Y, float& Z, float& Yaw, float& Pitch, int& R, int& G, int& B, float& InnerAngle, float& OuterAngle, float& Intensity, float& Radius, float& Temp); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortReplayMovableSpotLightPilotController.SpawnReplaySpotLight (Underlying native function: SpawnReplaySpotLight 0x26daa0c)
	void SpawnReplaySpotLight(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortReplayMovableSpotLightPilotController.SetSpotLightGroupMoveLockByNumber (Underlying native function: SetSpotLightGroupMoveLockByNumber 0x8e498c0)
	void SetSpotLightGroupMoveLockByNumber(uint32_t& Number, bool& bLocked); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortReplayMovableSpotLightPilotController.SelectSpotLightByNumber (Underlying native function: SelectSpotLightByNumber 0x8e48f2c)
	void SelectSpotLightByNumber(uint32_t& Number); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortReplayMovableSpotLightPilotController.SelectPrevSpotLight (Underlying native function: SelectPrevSpotLight 0x8e48f18)
	void SelectPrevSpotLight(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortReplayMovableSpotLightPilotController.SelectNextSpotLight (Underlying native function: SelectNextSpotLight 0x8e48f04)
	void SelectNextSpotLight(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortReplayMovableSpotLightPilotController.ReAimReplaySpotLight (Underlying native function: ReAimReplaySpotLight 0x26daa0c)
	void ReAimReplaySpotLight(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortReplayMovableSpotLightPilotController.PilotReplaySpotLight (Underlying native function: PilotReplaySpotLight 0x8e48ba4)
	void PilotReplaySpotLight(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortReplayMovableSpotLightPilotController.LockAllReplaySpotLights (Underlying native function: LockAllReplaySpotLights 0x8e47cac)
	void LockAllReplaySpotLights(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortReplayMovableSpotLightPilotController.GamepadLightColorSelectY (Underlying native function: GamepadLightColorSelectY 0x8e45f9c)
	void GamepadLightColorSelectY(float& Amt); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortReplayMovableSpotLightPilotController.GamepadLightColorSelectX (Underlying native function: GamepadLightColorSelectX 0x8e45f10)
	void GamepadLightColorSelectX(float& Amt); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortReplayMovableSpotLightPilotController.DuplicateReplaySpotLight (Underlying native function: DuplicateReplaySpotLight 0x26daa0c)
	void DuplicateReplaySpotLight(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortReplayMovableSpotLightPilotController.DestroyReplaySpotLight (Underlying native function: DestroyReplaySpotLight 0x26daa0c)
	void DestroyReplaySpotLight(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortReplayMovableSpotLightPilotController.DestroyAllReplaySpotLights (Underlying native function: DestroyAllReplaySpotLights 0x26daa0c)
	void DestroyAllReplaySpotLights(); // (Final | Exec | Native | Public)
};

