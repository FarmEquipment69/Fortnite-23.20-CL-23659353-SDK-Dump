// Class /Script/FortniteGame.PlaylistUserOptionDAD
// Size: 0x200
class UPlaylistUserOptionDAD : public UPlaylistUserOptionEnum
{
	struct FName CreativeUserOptionsListName; // 0x1f0 (0x4)
	unsigned char padding_1f4[0xc]; // 0x1f4 (0xc)

	/* Functions */

	// Function /Script/FortniteGame.PlaylistUserOptionDAD.UpdateData (Underlying native function: UpdateData 0x87b76fc)
	void UpdateData(); // (Native | Public)

	// Function /Script/FortniteGame.PlaylistUserOptionDAD.OnDADUpdateComplete (Underlying native function: OnDADUpdateComplete 0x87b5964)
	void OnDADUpdateComplete(enum EDataAssetDirectoryUpdateStatus& Result, struct TArray<struct FPrimaryAssetId*>& PatchedAssetIds); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.PlaylistUserOptionDAD.Init (Underlying native function: Init 0x87b447c)
	void Init(); // (Final | Native | Public | BlueprintCallable)
};

