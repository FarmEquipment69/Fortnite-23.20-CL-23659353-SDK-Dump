// Class /Script/MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0x1a0
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
	unsigned char unreflected_f0[0x8]; // 0xf0 (0x8) 
	bool bLockPreviousCamera; // 0xf8 (0x1)
	unsigned char unreflected_f9[0x3]; // 0xf9 (0x3) 
	struct FGuid CameraGuid; // 0xfc (0x10)
	struct FMovieSceneObjectBindingID CameraBindingID; // 0x10c (0x18)
	unsigned char unreflected_124[0xc]; // 0x124 (0xc) 
	struct FTransform InitialCameraCutTransform; // 0x130 (0x60)
	bool bHasInitialCameraCutTransform; // 0x190 (0x1)
	unsigned char padding_191[0xf]; // 0x191 (0xf)

	/* Functions */

	// Function /Script/MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID (Underlying native function: SetCameraBindingID 0x9a84700)
	void SetCameraBindingID(struct FMovieSceneObjectBindingID& InCameraBindingID); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID (Underlying native function: GetCameraBindingID 0x9a8446c)
	struct FMovieSceneObjectBindingID GetCameraBindingID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

