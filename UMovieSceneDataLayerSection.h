// Class /Script/MovieSceneTracks.MovieSceneDataLayerSection
// Size: 0x120
class UMovieSceneDataLayerSection : public UMovieSceneSection
{
	unsigned char unreflected_f0[0x8]; // 0xf0 (0x8) 
	struct TArray<struct FActorDataLayer> DataLayers; // 0xf8 (0x10)
	struct TArray<class UDataLayerAsset*> DataLayerAssets; // 0x108 (0x10)
	enum EDataLayerRuntimeState DesiredState; // 0x118 (0x1)
	enum EDataLayerRuntimeState PrerollState; // 0x119 (0x1)
	bool bFlushOnUnload; // 0x11a (0x1)
	unsigned char padding_11b[0x5]; // 0x11b (0x5)

	/* Functions */

	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.SetPrerollState (Underlying native function: SetPrerollState 0x9aaddf0)
	void SetPrerollState(enum EDataLayerRuntimeState& InPrerollState); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.SetFlushOnUnload (Underlying native function: SetFlushOnUnload 0x9aadcd0)
	void SetFlushOnUnload(bool& bFlushOnUnload); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.SetDesiredState (Underlying native function: SetDesiredState 0x9aadc54)
	void SetDesiredState(enum EDataLayerRuntimeState& InDesiredState); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayers (Underlying native function: SetDataLayers 0x9aadbb4)
	void SetDataLayers(struct TArray<struct FActorDataLayer>& InDataLayers); // (Final | Native | Private | HasOutParms | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayerAssets (Underlying native function: SetDataLayerAssets 0x9aada18)
	void SetDataLayerAssets(struct TArray<class UDataLayerAsset*>& InDataLayerAssets); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.GetPrerollState (Underlying native function: GetPrerollState 0x9aad084)
	enum EDataLayerRuntimeState GetPrerollState(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.GetFlushOnUnload (Underlying native function: GetFlushOnUnload 0x9aacf6c)
	bool GetFlushOnUnload(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.GetDesiredState (Underlying native function: GetDesiredState 0x97bc214)
	enum EDataLayerRuntimeState GetDesiredState(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayers (Underlying native function: GetDataLayers 0x9aacf50)
	struct TArray<struct FActorDataLayer> GetDataLayers(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayerAssets (Underlying native function: GetDataLayerAssets 0x9aacedc)
	struct TArray<class UDataLayerAsset*> GetDataLayerAssets(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

