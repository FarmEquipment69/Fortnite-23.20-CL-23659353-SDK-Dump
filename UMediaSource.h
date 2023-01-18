// Class /Script/MediaAssets.MediaSource
// Size: 0x80
class UMediaSource : public UObject
{
	unsigned char unreflected_80[0x80]; 

	/* Functions */

	// Function /Script/MediaAssets.MediaSource.Validate (Underlying native function: Validate 0x1627e28)
	bool Validate(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaSource.SetMediaOptionString (Underlying native function: SetMediaOptionString 0x9bcacd0)
	void SetMediaOptionString(struct FName& Key, struct FString& Value); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MediaAssets.MediaSource.SetMediaOptionInt64 (Underlying native function: SetMediaOptionInt64 0x9bcac04)
	void SetMediaOptionInt64(struct FName& Key, int64_t& Value); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MediaAssets.MediaSource.SetMediaOptionFloat (Underlying native function: SetMediaOptionFloat 0x9bcab30)
	void SetMediaOptionFloat(struct FName& Key, float& Value); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MediaAssets.MediaSource.SetMediaOptionBool (Underlying native function: SetMediaOptionBool 0x9bcaa60)
	void SetMediaOptionBool(struct FName& Key, bool& Value); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MediaAssets.MediaSource.GetUrl (Underlying native function: GetUrl 0x71f807c)
	struct FString GetUrl(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

