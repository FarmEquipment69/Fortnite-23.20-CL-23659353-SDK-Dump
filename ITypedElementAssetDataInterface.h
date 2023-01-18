// Class /Script/TypedElementRuntime.TypedElementAssetDataInterface
// Size: 0x28
class ITypedElementAssetDataInterface : public IInterface
{

	/* Functions */

	// Function /Script/TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData (Underlying native function: GetAssetData 0x9b2cf20)
	struct FAssetData GetAssetData(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas (Underlying native function: GetAllReferencedAssetDatas 0x9b2ce54)
	struct TArray<struct FAssetData> GetAllReferencedAssetDatas(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)
};

