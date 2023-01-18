// Class /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility
// Size: 0xb88
class UCreativeVideoPlayerFullscreenGameplayAbility : public UFortGameplayAbility
{
	class UClass* NoCollisionGameplayEffectClass; // 0xb20 (0x8)
	class UClass* NoDamageGameplayEffectClass; // 0xb28 (0x8)
	struct TArray<class UClass*> AnimationStateGameplayEffectClasses; // 0xb30 (0x10)
	class UClass* FullscreenWidgetClass; // 0xb40 (0x8)
	enum ECreativeVideoPlayerFullscreenEffects FullscreenEffects; // 0xb48 (0x1)
	bool bPromptToConfirmFullscreen; // 0xb49 (0x1)
	bool bIsDismissable; // 0xb4a (0x1)
	unsigned char unreflected_b4b[0x5]; // 0xb4b (0x5) 
	class UFortInputComponent* OverrideMovementInputComponent; // 0xb50 (0x8)
	class UFortInputComponent* SelectFullscreenModeInputComponent; // 0xb58 (0x8)
	struct TArray<struct FActiveGameplayEffectHandle*> ActiveGameplayEffects; // 0xb60 (0x10)
	enum ECreativeVideoPlayerFullscreenEffects RequestedFullscreenEffects; // 0xb70 (0x1)
	unsigned char unreflected_b71[0x7]; // 0xb71 (0x7) 
	class UUserWidget* VideoPlayerWidget; // 0xb78 (0x8)
	bool bActivatedFullscreen; // 0xb80 (0x1)
	unsigned char padding_b81[0x7]; // 0xb81 (0x7)

	/* Functions */

	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ServerLeaveFullscreenMode (Underlying native function: ServerLeaveFullscreenMode 0x7337ee8)
	void ServerLeaveFullscreenMode(); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ServerEnterFullscreenMode (Underlying native function: ServerEnterFullscreenMode 0x7337ed0)
	void ServerEnterFullscreenMode(); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.OnFullscreenUIEnds (Underlying native function: OnFullscreenUIEnds 0x7337ebc)
	void OnFullscreenUIEnds(); // (Final | Native | Private)

	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.HandleEnterFullscreenActionReleased (Underlying native function: HandleEnterFullscreenActionReleased 0x7337e74)
	void HandleEnterFullscreenActionReleased(); // (Final | Native | Private)

	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.HandleEnterFullscreenActionPressed (Underlying native function: HandleEnterFullscreenActionPressed 0x26daa0c)
	void HandleEnterFullscreenActionPressed(); // (Final | Native | Private)

	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ExitFullscreenState (Underlying native function: ExitFullscreenState 0x7337e48)
	void ExitFullscreenState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.EnterFullscreenStateWithOptions (Underlying native function: EnterFullscreenStateWithOptions 0x7337dc4)
	void EnterFullscreenStateWithOptions(struct FCreativeVideoPlayerFullscreenOptions& Options); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.EnterFullscreenState (Underlying native function: EnterFullscreenState 0x7337d98)
	void EnterFullscreenState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ClientTransitionToFullscreenVideo (Underlying native function: ClientTransitionToFullscreenVideo 0x7337d80)
	void ClientTransitionToFullscreenVideo(); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ClientLeaveFullscreenVideo (Underlying native function: ClientLeaveFullscreenVideo 0x7337d68)
	void ClientLeaveFullscreenVideo(); // (Final | Net | NetReliable | Native | Event | Private | NetClient)
};

