// Class /Script/HmxAudioGraphics.MusicTempometerComponent
// Size: 0x1a8
class UMusicTempometerComponent : public UActorComponent
{
	struct FName MusicSecondsParameterName; // 0xa0 (0x4)
	struct FName MusicMeasureParameterName; // 0xa4 (0x4)
	struct FName MusicBeatParameterName; // 0xa8 (0x4)
	struct FName MusicTickParameterName; // 0xac (0x4)
	struct FName MeasureBeatParameterName; // 0xb0 (0x4)
	struct FName MeasureTickParameterName; // 0xb4 (0x4)
	struct FName BeatTickParameterName; // 0xb8 (0x4)
	struct FName MeasureLifetimeParameterName; // 0xbc (0x4)
	struct FName BeatLifetimeParameterName; // 0xc0 (0x4)
	struct FName TickLifetimeParameterName; // 0xc4 (0x4)
	struct FName TimeSignatureNumeratorParameterName; // 0xc8 (0x4)
	struct FName TimeSignatureDenominatorParameterName; // 0xcc (0x4)
	struct FName TempoParameterName; // 0xd0 (0x4)
	struct FSongPos VideoRenderSongPos; // 0xd4 (0x4c)
	unsigned char unreflected_120[0x30]; // 0x120 (0x30) 
	struct TScriptInterface<class ISongPosInterface> Music; // 0x150 (0x10)
	class UMaterialParameterCollection* MaterialParameterCollection; // 0x160 (0x8)
	class UMaterialParameterCollectionInstance* MaterialParameterCollectionInstance; // 0x168 (0x8)
	float MusicSeconds; // 0x170 (0x4)
	float MusicMeasure; // 0x174 (0x4)
	float MusicBeat; // 0x178 (0x4)
	float MusicTick; // 0x17c (0x4)
	float MeasureBeat; // 0x180 (0x4)
	float MeasureTick; // 0x184 (0x4)
	float BeatTick; // 0x188 (0x4)
	float MeasureLifetime; // 0x18c (0x4)
	float BeatLifetime; // 0x190 (0x4)
	float TickLifetime; // 0x194 (0x4)
	float TimeSignatureNumerator; // 0x198 (0x4)
	float TimeSignatureDenominator; // 0x19c (0x4)
	float Tempo; // 0x1a0 (0x4)
	unsigned char padding_1a4[0x4]; // 0x1a4 (0x4)

	/* Functions */

	// Function /Script/HmxAudioGraphics.MusicTempometerComponent.SetSongPosInterfaceFromActor (Underlying native function: SetSongPosInterfaceFromActor 0x55891e0)
	void SetSongPosInterfaceFromActor(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudioGraphics.MusicTempometerComponent.SetSongPosInterface (Underlying native function: SetSongPosInterface 0x5589120)
	void SetSongPosInterface(struct TScriptInterface<class ISongPosInterface>& InSongPosInterface); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudioGraphics.MusicTempometerComponent.SetMaterialParameterCollection (Underlying native function: SetMaterialParameterCollection 0x5589050)
	void SetMaterialParameterCollection(class UMaterialParameterCollection*& InMaterialParameterCollection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudioGraphics.MusicTempometerComponent.GetTimeSignatureNumerator (Underlying native function: GetTimeSignatureNumerator 0x5588ff0)
	float GetTimeSignatureNumerator(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudioGraphics.MusicTempometerComponent.GetTimeSignatureDenominator (Underlying native function: GetTimeSignatureDenominator 0x5588fb0)
	float GetTimeSignatureDenominator(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudioGraphics.MusicTempometerComponent.GetTickLifetime (Underlying native function: GetTickLifetime 0x5588f70)
	float GetTickLifetime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudioGraphics.MusicTempometerComponent.GetTempo (Underlying native function: GetTempo 0x5588f30)
	float GetTempo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudioGraphics.MusicTempometerComponent.GetSongPosInterfaceNoMutex (Underlying native function: GetSongPosInterfaceNoMutex 0x5588f00)
	struct TScriptInterface<class ISongPosInterface> GetSongPosInterfaceNoMutex(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudioGraphics.MusicTempometerComponent.GetSongPosInterface (Underlying native function: GetSongPosInterface 0x5588ea0)
	struct TScriptInterface<class ISongPosInterface> GetSongPosInterface(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudioGraphics.MusicTempometerComponent.GetSongPos (Underlying native function: GetSongPos 0x5588e20)
	struct FSongPos GetSongPos(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudioGraphics.MusicTempometerComponent.GetMusicTick (Underlying native function: GetMusicTick 0x5588de0)
	float GetMusicTick(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudioGraphics.MusicTempometerComponent.GetMusicSeconds (Underlying native function: GetMusicSeconds 0x5588da0)
	float GetMusicSeconds(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudioGraphics.MusicTempometerComponent.GetMusicMeasure (Underlying native function: GetMusicMeasure 0x5588d60)
	float GetMusicMeasure(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudioGraphics.MusicTempometerComponent.GetMusicBeat (Underlying native function: GetMusicBeat 0x5588d20)
	float GetMusicBeat(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudioGraphics.MusicTempometerComponent.GetMeasureTick (Underlying native function: GetMeasureTick 0x5588ce0)
	float GetMeasureTick(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudioGraphics.MusicTempometerComponent.GetMeasureLifetime (Underlying native function: GetMeasureLifetime 0x5588ca0)
	float GetMeasureLifetime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudioGraphics.MusicTempometerComponent.GetMeasureBeat (Underlying native function: GetMeasureBeat 0x5588c60)
	float GetMeasureBeat(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudioGraphics.MusicTempometerComponent.GetMaterialParameterCollection (Underlying native function: GetMaterialParameterCollection 0x5588c00)
	class UMaterialParameterCollection* GetMaterialParameterCollection(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudioGraphics.MusicTempometerComponent.GetBeatTick (Underlying native function: GetBeatTick 0x5588bc0)
	float GetBeatTick(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudioGraphics.MusicTempometerComponent.GetBeatLifetime (Underlying native function: GetBeatLifetime 0x5588b80)
	float GetBeatLifetime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

