// Class /Script/HmxAudio.HarmonixPlayerComponentBase
// Size: 0x1e0
class UHarmonixPlayerComponentBase : public UActorComponent
{
	struct FMulticastInlineDelegate PlayStateEvent; // 0xa0 (0x10)
	struct FMulticastInlineDelegate TriggerStateEvent; // 0xb0 (0x10)
	struct FStartCondition StartCondition; // 0xc0 (0x10)
	enum EAudioClipStartPosition StartPosition; // 0xd0 (0x1)
	unsigned char unreflected_d1[0x3]; // 0xd1 (0x3) 
	int TickOffset; // 0xd4 (0x4)
	enum EWaitAtLeastMode AtLeastMode; // 0xd8 (0x1)
	unsigned char unreflected_d9[0x3]; // 0xd9 (0x3) 
	float WaitAtLeast; // 0xdc (0x4)
	enum EPlayEmitterFindMethod PlayEmitterSpec; // 0xe0 (0x1)
	unsigned char unreflected_e1[0x7]; // 0xe1 (0x7) 
	class AActor* PlayEmitterObj; // 0xe8 (0x8)
	struct FName PlayEmitterTag; // 0xf0 (0x4)
	enum ESyncEmitterFindMethod syncEmitterSpec; // 0xf4 (0x1)
	unsigned char unreflected_f5[0x3]; // 0xf5 (0x3) 
	class AActor* SyncEmitterObj; // 0xf8 (0x8)
	class UMusicPlayerComponentBase* syncClip; // 0x100 (0x8)
	struct FName SyncEmitterTag; // 0x108 (0x4)
	float Gain; // 0x10c (0x4)
	float Volume; // 0x110 (0x4)
	float VolumeTransitionTime; // 0x114 (0x4)
	bool mute; // 0x118 (0x1)
	unsigned char unreflected_119[0x7]; // 0x119 (0x7) 
	struct TArray<struct FAudioParam> Parameters; // 0x120 (0x10)
	unsigned char unreflected_130[0x10]; // 0x130 (0x10) 
	struct FMusicalPlayerRuntimeState RuntimeState; // 0x140 (0x14)
	unsigned char padding_154[0x8c]; // 0x154 (0x8c)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.Trigger (Underlying native function: Trigger 0x545eab0)
	bool Trigger(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.Stop (Underlying native function: Stop 0x545e7f0)
	bool Stop(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.SetVolume (Underlying native function: SetVolume 0x545d8a0)
	void SetVolume(float& Volume); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.SetTickOffset (Underlying native function: SetTickOffset 0x545bab0)
	void SetTickOffset(int& Tick); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.SetSyncEmitterSpec (Underlying native function: SetSyncEmitterSpec 0x545b8a0)
	void SetSyncEmitterSpec(enum ESyncEmitterFindMethod& syncEmitterSpec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.SetSyncClip (Underlying native function: SetSyncClip 0x545b710)
	void SetSyncClip(class UMusicPlayerComponentBase*& syncClip); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.SetStartPosition (Underlying native function: SetStartPosition 0x545b1a0)
	void SetStartPosition(enum EAudioClipStartPosition& Pos); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.SetPlayEmitterFindMethod (Underlying native function: SetPlayEmitterFindMethod 0x5459340)
	void SetPlayEmitterFindMethod(enum EPlayEmitterFindMethod& Method); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.SetParameterValue (Underlying native function: SetParameterValue 0x5458f70)
	bool SetParameterValue(struct FName& Name, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.SetMute (Underlying native function: SetMute 0x5458130)
	void SetMute(bool& mute); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.SetGain (Underlying native function: SetGain 0x5455b70)
	void SetGain(float& Gain); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.Pause (Underlying native function: Pause 0x54505e0)
	bool Pause(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.IsTriggered (Underlying native function: IsTriggered 0x544cd60)
	bool IsTriggered(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.IsStarted (Underlying native function: IsStarted 0x544cd30)
	bool IsStarted(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.IsPlaying (Underlying native function: IsPlaying 0x544cd10)
	bool IsPlaying(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.IsPaused (Underlying native function: IsPaused 0x544ccf0)
	bool IsPaused(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.IsNotPlaying (Underlying native function: IsNotPlaying 0x544ccc0)
	bool IsNotPlaying(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.IsFinished (Underlying native function: IsFinished 0x544cb60)
	bool IsFinished(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.GetTickOffset (Underlying native function: GetTickOffset 0x544bba0)
	int GetTickOffset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.GetSyncEmitterSpec (Underlying native function: GetSyncEmitterSpec 0x544b800)
	enum ESyncEmitterFindMethod GetSyncEmitterSpec(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.GetSyncClip (Underlying native function: GetSyncClip 0x544b750)
	class UMusicPlayerComponentBase* GetSyncClip(class UHarmonixPlayerComponentBase*& syncClip); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.GetStartPosition (Underlying native function: GetStartPosition 0x544b710)
	enum EAudioClipStartPosition GetStartPosition(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.GetSecsUntilNextPlay (Underlying native function: GetSecsUntilNextPlay 0x544b0f0)
	float GetSecsUntilNextPlay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.GetParameterValue (Underlying native function: GetParameterValue 0x544aa70)
	bool GetParameterValue(struct FName& Name, float& Value); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.GetHarmonixHandle (Underlying native function: GetHarmonixHandle 0x5449970)
	class UHarmonixHandle* GetHarmonixHandle(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.GetElapsedMs (Underlying native function: GetElapsedMs 0x5449370)
	float GetElapsedMs(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.FadeAndStop (Underlying native function: FadeAndStop 0x5447e90)
	void FadeAndStop(float& Seconds); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixPlayerComponentBase.Continue (Underlying native function: Continue 0x54459f0)
	bool Continue(); // (Final | Native | Public | BlueprintCallable)
};

