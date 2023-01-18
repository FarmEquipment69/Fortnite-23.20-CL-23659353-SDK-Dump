// Class /Script/LevelSequence.LevelSequence
// Size: 0x220
class ULevelSequence : public UMovieSceneSequence
{
	unsigned char unreflected_68[0x8]; // 0x68 (0x8) 
	class UMovieScene* MovieScene; // 0x70 (0x8)
	struct FLevelSequenceObjectReferenceMap ObjectReferences; // 0x78 (0x50)
	struct FLevelSequenceBindingReferences BindingReferences; // 0xc8 (0xf0)
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects; // 0x1b8 (0x50)
	unsigned char DirectorClass_208[0x8]; // 0x208 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	struct TArray<class UAssetUserData*> AssetUserData; // 0x210 (0x10)

	/* Functions */

	// Function /Script/LevelSequence.LevelSequence.RemoveMetaDataByClass (Underlying native function: RemoveMetaDataByClass 0x71a663c)
	void RemoveMetaDataByClass(class UClass*& InClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LevelSequence.LevelSequence.FindOrAddMetaDataByClass (Underlying native function: FindOrAddMetaDataByClass 0x893143c)
	class UObject* FindOrAddMetaDataByClass(class UClass*& InClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LevelSequence.LevelSequence.FindMetaDataByClass (Underlying native function: FindMetaDataByClass 0x893143c)
	class UObject* FindMetaDataByClass(class UClass*& InClass); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LevelSequence.LevelSequence.CopyMetaData (Underlying native function: CopyMetaData 0x893143c)
	class UObject* CopyMetaData(class UObject*& InMetaData); // (Final | Native | Public | BlueprintCallable)
};

