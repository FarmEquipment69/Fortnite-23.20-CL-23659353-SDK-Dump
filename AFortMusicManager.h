// Class /Script/FortniteGame.FortMusicManager
// Size: 0x2e8
class AFortMusicManager : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	class AFortPlayerController* ControllerOwner; // 0x290 (0x8)
	class UFortMusicVoice* Voices[0x2]; // 0x298 (0x8) (ARRAY) 
	struct TArray<class UFortMusicVoice*> VoicesToCleanUp; // 0x2a8 (0x10)
	unsigned char unreflected_2b8[0x4]; // 0x2b8 (0x4) 
	unsigned char bWorldReadyCalled; // 0x2bc (0x1)
	unsigned char unreflected_2bd[0x1b]; // 0x2bd (0x1b) 
	class UFortMusicManagerBank* MusicBank; // 0x2d8 (0x8)
	unsigned char padding_2e0[0x8]; // 0x2e0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortMusicManager.StopPrimaryMusic (Underlying native function: StopPrimaryMusic 0x8e82230)
	void StopPrimaryMusic(bool& bPlayOutro); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMusicManager.StopMusicVoice (Underlying native function: StopMusicVoice 0x8e821c0)
	void StopMusicVoice(class UFortMusicVoice*& Voice); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMusicManager.SetPrimaryMusicVolume (Underlying native function: SetPrimaryMusicVolume 0x8e81b2c)
	void SetPrimaryMusicVolume(float& InVolumeMultiplier); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMusicManager.SetMusicBank (Underlying native function: SetMusicBank 0x8e81a7c)
	void SetMusicBank(class UFortMusicManagerBank*& Bank); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMusicManager.PlayStinger (Underlying native function: PlayStinger 0x720c64c)
	void PlayStinger(class UFortMusicAsset*& NewMusicAsset); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortMusicManager.PlayMusicVoice (Underlying native function: PlayMusicVoice 0x8e80568)
	class UFortMusicVoice* PlayMusicVoice(class UFortMusicAsset*& Asset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMusicManager.OnVoiceFinished (Underlying native function: OnVoiceFinished 0x8e80484)
	void OnVoiceFinished(class UFortMusicVoice*& Voice); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMusicManager.OnThresholdChange (Has no native function)
	void OnThresholdChange(struct TEnumAsByte<EFortCombatThresholds>& OldThreshold, struct TEnumAsByte<EFortCombatThresholds>& NewThreshold); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMusicManager.OnPlayerSpawned (Has no native function)
	void OnPlayerSpawned(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMusicManager.OnPlayerDowned (Has no native function)
	void OnPlayerDowned(struct FFortPlayerDeathReport& DeathReport); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortMusicManager.OnMusicBankChanged (Has no native function)
	void OnMusicBankChanged(class UFortMusicManagerBank*& NewBank); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMusicManager.OnDayPhaseChanged (Has no native function)
	void OnDayPhaseChanged(enum EFortDayPhase& CurrentDayPhase, enum EFortDayPhase& PreviousDayPhase, bool& bAtCreation); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMusicManager.OnAudioComponentStopped (Has no native function)
	void OnAudioComponentStopped(class UAudioComponent*& Component); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMusicManager.OnAudioComponentPlayed (Has no native function)
	void OnAudioComponentPlayed(class UAudioComponent*& Component); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMusicManager.GetPrimaryMusicVolume (Underlying native function: GetPrimaryMusicVolume 0x8e7eba8)
	float GetPrimaryMusicVolume(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMusicManager.GetMusicBank (Underlying native function: GetMusicBank 0x8e7e94c)
	class UFortMusicManagerBank* GetMusicBank(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMusicManager.GetEventHeatPercentTotal (Underlying native function: GetEventHeatPercentTotal 0x8e7e5ac)
	float GetEventHeatPercentTotal(struct TEnumAsByte<EFortCombatEvents>& CombatEvent); // (Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMusicManager.GetEventHeatPercent (Underlying native function: GetEventHeatPercent 0x8e7e484)
	float GetEventHeatPercent(struct TEnumAsByte<EFortCombatEvents>& CombatEvent); // (Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMusicManager.ChangePrimaryMusic (Underlying native function: ChangePrimaryMusic 0x8e7d924)
	class UFortMusicVoice* ChangePrimaryMusic(class UFortMusicAsset*& NewMusicAsset, bool& bPlayStinger); // (Final | Native | Public | BlueprintCallable)
};

