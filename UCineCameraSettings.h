// Class /Script/CinematicCamera.CineCameraSettings
// Size: 0xa8
class UCineCameraSettings : public UDeveloperSettings
{
	struct FString DefaultLensPresetName; // 0x30 (0x10)
	float DefaultLensFocalLength; // 0x40 (0x4)
	float DefaultLensFStop; // 0x44 (0x4)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0x48 (0x10)
	struct FString DefaultFilmbackPreset; // 0x58 (0x10)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0x68 (0x10)
	struct FString DefaultCropPresetName; // 0x78 (0x10)
	struct TArray<struct FNamedPlateCropPreset> CropPresets; // 0x88 (0x10)
	unsigned char padding_98[0x10]; // 0x98 (0x10)

	/* Functions */

	// Function /Script/CinematicCamera.CineCameraSettings.SetLensPresets (Underlying native function: SetLensPresets 0x9b321d4)
	void SetLensPresets(struct TArray<struct FNamedLensPreset>& InLensPresets); // (Final | Native | Private | HasOutParms | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraSettings.SetFilmbackPresets (Underlying native function: SetFilmbackPresets 0x9b31f38)
	void SetFilmbackPresets(struct TArray<struct FNamedFilmbackPreset>& InFilmbackPresets); // (Final | Native | Private | HasOutParms | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensPresetName (Underlying native function: SetDefaultLensPresetName 0x9b31bc0)
	void SetDefaultLensPresetName(struct FString& InDefaultLensPresetName); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensFStop (Underlying native function: SetDefaultLensFStop 0x9b31a80)
	void SetDefaultLensFStop(float& InDefaultLensFStop); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength (Underlying native function: SetDefaultLensFocalLength 0x9b31b20)
	void SetDefaultLensFocalLength(float& InDefaultLensFocalLength); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset (Underlying native function: SetDefaultFilmbackPreset 0x9b31910)
	void SetDefaultFilmbackPreset(struct FString& InDefaultFilmbackPreset); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultCropPresetName (Underlying native function: SetDefaultCropPresetName 0x9b317b0)
	void SetDefaultCropPresetName(struct FString& InDefaultCropPresetName); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraSettings.SetCropPresets (Underlying native function: SetCropPresets 0x9b31564)
	void SetCropPresets(struct TArray<struct FNamedPlateCropPreset>& InCropPresets); // (Final | Native | Private | HasOutParms | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraSettings.GetLensPresetNames (Underlying native function: GetLensPresetNames 0x9b312c8)
	struct TArray<struct FString> GetLensPresetNames(); // (Final | Native | Private | Const)

	// Function /Script/CinematicCamera.CineCameraSettings.GetLensPresetByName (Underlying native function: GetLensPresetByName 0x9b31090)
	bool GetLensPresetByName(struct FString& PresetName, struct FCameraLensSettings& LensSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraSettings.GetFilmbackPresetNames (Underlying native function: GetFilmbackPresetNames 0x9b30f68)
	struct TArray<struct FString> GetFilmbackPresetNames(); // (Final | Native | Private | Const)

	// Function /Script/CinematicCamera.CineCameraSettings.GetFilmbackPresetByName (Underlying native function: GetFilmbackPresetByName 0x9b30d00)
	bool GetFilmbackPresetByName(struct FString& PresetName, struct FCameraFilmbackSettings& FilmbackSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraSettings.GetCropPresetNames (Underlying native function: GetCropPresetNames 0x9b30b80)
	struct TArray<struct FString> GetCropPresetNames(); // (Final | Native | Private | Const)

	// Function /Script/CinematicCamera.CineCameraSettings.GetCropPresetByName (Underlying native function: GetCropPresetByName 0x9b3080c)
	bool GetCropPresetByName(struct FString& PresetName, struct FPlateCropSettings& CropSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CinematicCamera.CineCameraSettings.GetCineCameraSettings (Underlying native function: GetCineCameraSettings 0x9b307dc)
	static class UCineCameraSettings* GetCineCameraSettings(); // (Final | Native | Static | Private | BlueprintCallable)
};

