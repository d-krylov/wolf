
#ifndef WOLF_STRUCTURES_H
#define WOLF_STRUCTURES_H

// includes
#include "enums.h"

namespace Wolf {

// content

struct BaseOutStructure {
  StructureType sType;
  BaseOutStructure *pNext;
};

struct BaseInStructure {
  StructureType sType;
  BaseInStructure *pNext;
};

struct Offset2D {
  int32_t x;
  int32_t y;
};

struct Offset3D {
  int32_t x;
  int32_t y;
  int32_t z;
};

struct Extent2D {
  uint32_t width;
  uint32_t height;
};

struct Extent3D {
  uint32_t width;
  uint32_t height;
  uint32_t depth;
};

struct Viewport {
  float x;
  float y;
  float width;
  float height;
  float minDepth;
  float maxDepth;
};

struct Rect2D {
  Offset2D offset;
  Extent2D extent;
};

struct ClearRect {
  Rect2D rect;
  uint32_t baseArrayLayer;
  uint32_t layerCount;
};

struct ComponentMapping {
  ComponentSwizzle r;
  ComponentSwizzle g;
  ComponentSwizzle b;
  ComponentSwizzle a;
};

struct PhysicalDeviceLimits {
  uint32_t maxImageDimension1D;
  uint32_t maxImageDimension2D;
  uint32_t maxImageDimension3D;
  uint32_t maxImageDimensionCube;
  uint32_t maxImageArrayLayers;
  uint32_t maxTexelBufferElements;
  uint32_t maxUniformBufferRange;
  uint32_t maxStorageBufferRange;
  uint32_t maxPushConstantsSize;
  uint32_t maxMemoryAllocationCount;
  uint32_t maxSamplerAllocationCount;
  VkDeviceSize bufferImageGranularity;
  VkDeviceSize sparseAddressSpaceSize;
  uint32_t maxBoundDescriptorSets;
  uint32_t maxPerStageDescriptorSamplers;
  uint32_t maxPerStageDescriptorUniformBuffers;
  uint32_t maxPerStageDescriptorStorageBuffers;
  uint32_t maxPerStageDescriptorSampledImages;
  uint32_t maxPerStageDescriptorStorageImages;
  uint32_t maxPerStageDescriptorInputAttachments;
  uint32_t maxPerStageResources;
  uint32_t maxDescriptorSetSamplers;
  uint32_t maxDescriptorSetUniformBuffers;
  uint32_t maxDescriptorSetUniformBuffersDynamic;
  uint32_t maxDescriptorSetStorageBuffers;
  uint32_t maxDescriptorSetStorageBuffersDynamic;
  uint32_t maxDescriptorSetSampledImages;
  uint32_t maxDescriptorSetStorageImages;
  uint32_t maxDescriptorSetInputAttachments;
  uint32_t maxVertexInputAttributes;
  uint32_t maxVertexInputBindings;
  uint32_t maxVertexInputAttributeOffset;
  uint32_t maxVertexInputBindingStride;
  uint32_t maxVertexOutputComponents;
  uint32_t maxTessellationGenerationLevel;
  uint32_t maxTessellationPatchSize;
  uint32_t maxTessellationControlPerVertexInputComponents;
  uint32_t maxTessellationControlPerVertexOutputComponents;
  uint32_t maxTessellationControlPerPatchOutputComponents;
  uint32_t maxTessellationControlTotalOutputComponents;
  uint32_t maxTessellationEvaluationInputComponents;
  uint32_t maxTessellationEvaluationOutputComponents;
  uint32_t maxGeometryShaderInvocations;
  uint32_t maxGeometryInputComponents;
  uint32_t maxGeometryOutputComponents;
  uint32_t maxGeometryOutputVertices;
  uint32_t maxGeometryTotalOutputComponents;
  uint32_t maxFragmentInputComponents;
  uint32_t maxFragmentOutputAttachments;
  uint32_t maxFragmentDualSrcAttachments;
  uint32_t maxFragmentCombinedOutputResources;
  uint32_t maxComputeSharedMemorySize;
  uint32_t maxComputeWorkGroupCount[3];
  uint32_t maxComputeWorkGroupInvocations;
  uint32_t maxComputeWorkGroupSize[3];
  uint32_t subPixelPrecisionBits;
  uint32_t subTexelPrecisionBits;
  uint32_t mipmapPrecisionBits;
  uint32_t maxDrawIndexedIndexValue;
  uint32_t maxDrawIndirectCount;
  float maxSamplerLodBias;
  float maxSamplerAnisotropy;
  uint32_t maxViewports;
  uint32_t maxViewportDimensions[2];
  float viewportBoundsRange[2];
  uint32_t viewportSubPixelBits;
  size_t minMemoryMapAlignment;
  VkDeviceSize minTexelBufferOffsetAlignment;
  VkDeviceSize minUniformBufferOffsetAlignment;
  VkDeviceSize minStorageBufferOffsetAlignment;
  int32_t minTexelOffset;
  uint32_t maxTexelOffset;
  int32_t minTexelGatherOffset;
  uint32_t maxTexelGatherOffset;
  float minInterpolationOffset;
  float maxInterpolationOffset;
  uint32_t subPixelInterpolationOffsetBits;
  uint32_t maxFramebufferWidth;
  uint32_t maxFramebufferHeight;
  uint32_t maxFramebufferLayers;
  SampleCountMask framebufferColorSampleCounts;
  SampleCountMask framebufferDepthSampleCounts;
  SampleCountMask framebufferStencilSampleCounts;
  SampleCountMask framebufferNoAttachmentsSampleCounts;
  uint32_t maxColorAttachments;
  SampleCountMask sampledImageColorSampleCounts;
  SampleCountMask sampledImageIntegerSampleCounts;
  SampleCountMask sampledImageDepthSampleCounts;
  SampleCountMask sampledImageStencilSampleCounts;
  SampleCountMask storageImageSampleCounts;
  uint32_t maxSampleMaskWords;
  VkBool32 timestampComputeAndGraphics;
  float timestampPeriod;
  uint32_t maxClipDistances;
  uint32_t maxCullDistances;
  uint32_t maxCombinedClipAndCullDistances;
  uint32_t discreteQueuePriorities;
  float pointSizeRange[2];
  float lineWidthRange[2];
  float pointSizeGranularity;
  float lineWidthGranularity;
  VkBool32 strictLines;
  VkBool32 standardSampleLocations;
  VkDeviceSize optimalBufferCopyOffsetAlignment;
  VkDeviceSize optimalBufferCopyRowPitchAlignment;
  VkDeviceSize nonCoherentAtomSize;
};

struct PhysicalDeviceSparseProperties {
  VkBool32 residencyStandard2DBlockShape;
  VkBool32 residencyStandard2DMultisampleBlockShape;
  VkBool32 residencyStandard3DBlockShape;
  VkBool32 residencyAlignedMipSize;
  VkBool32 residencyNonResidentStrict;
};

struct PhysicalDeviceProperties {
  uint32_t apiVersion;
  uint32_t driverVersion;
  uint32_t vendorID;
  uint32_t deviceID;
  PhysicalDeviceType deviceType;
  char deviceName[VK_MAX_PHYSICAL_DEVICE_NAME_SIZE];
  uint8_t pipelineCacheUUID[VK_UUID_SIZE];
  PhysicalDeviceLimits limits;
  PhysicalDeviceSparseProperties sparseProperties;
};

struct ExtensionProperties {
  char extensionName[VK_MAX_EXTENSION_NAME_SIZE];
  uint32_t specVersion;
};

struct LayerProperties {
  char layerName[VK_MAX_EXTENSION_NAME_SIZE];
  uint32_t specVersion;
  uint32_t implementationVersion;
  char description[VK_MAX_DESCRIPTION_SIZE];
};

struct ApplicationInfo {
  StructureType sType;
  void *pNext;
  char *pApplicationName;
  uint32_t applicationVersion;
  char *pEngineName;
  uint32_t engineVersion;
  uint32_t apiVersion;
};

struct AllocationCallbacks {
  void *pUserData;
  PFN_vkAllocationFunction pfnAllocation;
  PFN_vkReallocationFunction pfnReallocation;
  PFN_vkFreeFunction pfnFree;
  PFN_vkInternalAllocationNotification pfnInternalAllocation;
  PFN_vkInternalFreeNotification pfnInternalFree;
};

struct DeviceQueueCreateInfo {
  StructureType sType;
  void *pNext;
  DeviceQueueCreateMask flags;
  uint32_t queueFamilyIndex;
  uint32_t queueCount;
  float *pQueuePriorities;
};

struct PhysicalDeviceFeatures {
  VkBool32 robustBufferAccess;
  VkBool32 fullDrawIndexUint32;
  VkBool32 imageCubeArray;
  VkBool32 independentBlend;
  VkBool32 geometryShader;
  VkBool32 tessellationShader;
  VkBool32 sampleRateShading;
  VkBool32 dualSrcBlend;
  VkBool32 logicOp;
  VkBool32 multiDrawIndirect;
  VkBool32 drawIndirectFirstInstance;
  VkBool32 depthClamp;
  VkBool32 depthBiasClamp;
  VkBool32 fillModeNonSolid;
  VkBool32 depthBounds;
  VkBool32 wideLines;
  VkBool32 largePoints;
  VkBool32 alphaToOne;
  VkBool32 multiViewport;
  VkBool32 samplerAnisotropy;
  VkBool32 textureCompressionETC2;
  VkBool32 textureCompressionASTC_LDR;
  VkBool32 textureCompressionBC;
  VkBool32 occlusionQueryPrecise;
  VkBool32 pipelineStatisticsQuery;
  VkBool32 vertexPipelineStoresAndAtomics;
  VkBool32 fragmentStoresAndAtomics;
  VkBool32 shaderTessellationAndGeometryPointSize;
  VkBool32 shaderImageGatherExtended;
  VkBool32 shaderStorageImageExtendedFormats;
  VkBool32 shaderStorageImageMultisample;
  VkBool32 shaderStorageImageReadWithoutFormat;
  VkBool32 shaderStorageImageWriteWithoutFormat;
  VkBool32 shaderUniformBufferArrayDynamicIndexing;
  VkBool32 shaderSampledImageArrayDynamicIndexing;
  VkBool32 shaderStorageBufferArrayDynamicIndexing;
  VkBool32 shaderStorageImageArrayDynamicIndexing;
  VkBool32 shaderClipDistance;
  VkBool32 shaderCullDistance;
  VkBool32 shaderFloat64;
  VkBool32 shaderInt64;
  VkBool32 shaderInt16;
  VkBool32 shaderResourceResidency;
  VkBool32 shaderResourceMinLod;
  VkBool32 sparseBinding;
  VkBool32 sparseResidencyBuffer;
  VkBool32 sparseResidencyImage2D;
  VkBool32 sparseResidencyImage3D;
  VkBool32 sparseResidency2Samples;
  VkBool32 sparseResidency4Samples;
  VkBool32 sparseResidency8Samples;
  VkBool32 sparseResidency16Samples;
  VkBool32 sparseResidencyAliased;
  VkBool32 variableMultisampleRate;
  VkBool32 inheritedQueries;
};

struct DeviceCreateInfo {
  StructureType sType;
  void *pNext;
  DeviceCreateMask flags;
  uint32_t queueCreateInfoCount;
  DeviceQueueCreateInfo *pQueueCreateInfos;
  uint32_t enabledLayerCount;
  char *const *ppEnabledLayerNames;
  uint32_t enabledExtensionCount;
  char *const *ppEnabledExtensionNames;
  PhysicalDeviceFeatures *pEnabledFeatures;
};

struct InstanceCreateInfo {
  StructureType sType;
  void *pNext;
  InstanceCreateMask flags;
  ApplicationInfo *pApplicationInfo;
  uint32_t enabledLayerCount;
  char *const *ppEnabledLayerNames;
  uint32_t enabledExtensionCount;
  char *const *ppEnabledExtensionNames;
};

struct QueueFamilyProperties {
  QueueMask queueFlags;
  uint32_t queueCount;
  uint32_t timestampValidBits;
  Extent3D minImageTransferGranularity;
};

struct MemoryType {
  MemoryPropertyMask propertyFlags;
  uint32_t heapIndex;
};

struct MemoryHeap {
  VkDeviceSize size;
  MemoryHeapMask flags;
};

struct PhysicalDeviceMemoryProperties {
  uint32_t memoryTypeCount;
  MemoryType memoryTypes[VK_MAX_MEMORY_TYPES];
  uint32_t memoryHeapCount;
  MemoryHeap memoryHeaps[VK_MAX_MEMORY_HEAPS];
};

struct MemoryAllocateInfo {
  StructureType sType;
  void *pNext;
  VkDeviceSize allocationSize;
  uint32_t memoryTypeIndex;
};

struct MemoryRequirements {
  VkDeviceSize size;
  VkDeviceSize alignment;
  uint32_t memoryTypeBits;
};

struct SparseImageFormatProperties {
  ImageAspectMask aspectMask;
  Extent3D imageGranularity;
  SparseImageFormatMask flags;
};

struct SparseImageMemoryRequirements {
  SparseImageFormatProperties formatProperties;
  uint32_t imageMipTailFirstLod;
  VkDeviceSize imageMipTailSize;
  VkDeviceSize imageMipTailOffset;
  VkDeviceSize imageMipTailStride;
};

struct MappedMemoryRange {
  StructureType sType;
  void *pNext;
  VkDeviceMemory memory;
  VkDeviceSize offset;
  VkDeviceSize size;
};

struct FormatProperties {
  FormatFeatureMask linearTilingFeatures;
  FormatFeatureMask optimalTilingFeatures;
  FormatFeatureMask bufferFeatures;
};

struct ImageFormatProperties {
  Extent3D maxExtent;
  uint32_t maxMipLevels;
  uint32_t maxArrayLayers;
  SampleCountMask sampleCounts;
  VkDeviceSize maxResourceSize;
};

struct DescriptorBufferInfo {
  VkBuffer buffer;
  VkDeviceSize offset;
  VkDeviceSize range;
};

struct DescriptorImageInfo {
  VkSampler sampler;
  VkImageView imageView;
  ImageLayout imageLayout;
};

struct WriteDescriptorSet {
  StructureType sType;
  void *pNext;
  VkDescriptorSet dstSet;
  uint32_t dstBinding;
  uint32_t dstArrayElement;
  uint32_t descriptorCount;
  DescriptorType descriptorType;
  DescriptorImageInfo *pImageInfo;
  DescriptorBufferInfo *pBufferInfo;
  VkBufferView *pTexelBufferView;
};

struct CopyDescriptorSet {
  StructureType sType;
  void *pNext;
  VkDescriptorSet srcSet;
  uint32_t srcBinding;
  uint32_t srcArrayElement;
  VkDescriptorSet dstSet;
  uint32_t dstBinding;
  uint32_t dstArrayElement;
  uint32_t descriptorCount;
};

struct BufferUsageFlags2CreateInfoKHR {
  StructureType sType;
  void *pNext;
  BufferUsageMask2 usage;
};

struct BufferCreateInfo {
  StructureType sType;
  void *pNext;
  BufferCreateMask flags;
  VkDeviceSize size;
  BufferUsageMask usage;
  SharingMode sharingMode;
  uint32_t queueFamilyIndexCount;
  uint32_t *pQueueFamilyIndices;
};

struct BufferViewCreateInfo {
  StructureType sType;
  void *pNext;
  BufferViewCreateMask flags;
  VkBuffer buffer;
  Format format;
  VkDeviceSize offset;
  VkDeviceSize range;
};

struct ImageSubresource {
  ImageAspectMask aspectMask;
  uint32_t mipLevel;
  uint32_t arrayLayer;
};

struct ImageSubresourceLayers {
  ImageAspectMask aspectMask;
  uint32_t mipLevel;
  uint32_t baseArrayLayer;
  uint32_t layerCount;
};

struct ImageSubresourceRange {
  ImageAspectMask aspectMask;
  uint32_t baseMipLevel;
  uint32_t levelCount;
  uint32_t baseArrayLayer;
  uint32_t layerCount;
};

struct MemoryBarrier {
  StructureType sType;
  void *pNext;
  AccessMask srcAccessMask;
  AccessMask dstAccessMask;
};

struct BufferMemoryBarrier {
  StructureType sType;
  void *pNext;
  AccessMask srcAccessMask;
  AccessMask dstAccessMask;
  uint32_t srcQueueFamilyIndex;
  uint32_t dstQueueFamilyIndex;
  VkBuffer buffer;
  VkDeviceSize offset;
  VkDeviceSize size;
};

struct ImageMemoryBarrier {
  StructureType sType;
  void *pNext;
  AccessMask srcAccessMask;
  AccessMask dstAccessMask;
  ImageLayout oldLayout;
  ImageLayout newLayout;
  uint32_t srcQueueFamilyIndex;
  uint32_t dstQueueFamilyIndex;
  VkImage image;
  ImageSubresourceRange subresourceRange;
};

struct ImageCreateInfo {
  StructureType sType;
  void *pNext;
  ImageCreateMask flags;
  ImageType imageType;
  Format format;
  Extent3D extent;
  uint32_t mipLevels;
  uint32_t arrayLayers;
  SampleCountMaskBits samples;
  ImageTiling tiling;
  ImageUsageMask usage;
  SharingMode sharingMode;
  uint32_t queueFamilyIndexCount;
  uint32_t *pQueueFamilyIndices;
  ImageLayout initialLayout;
};

struct SubresourceLayout {
  VkDeviceSize offset;
  VkDeviceSize size;
  VkDeviceSize rowPitch;
  VkDeviceSize arrayPitch;
  VkDeviceSize depthPitch;
};

struct ImageViewCreateInfo {
  StructureType sType;
  void *pNext;
  ImageViewCreateMask flags;
  VkImage image;
  ImageViewType viewType;
  Format format;
  ComponentMapping components;
  ImageSubresourceRange subresourceRange;
};

struct BufferCopy {
  VkDeviceSize srcOffset;
  VkDeviceSize dstOffset;
  VkDeviceSize size;
};

struct SparseMemoryBind {
  VkDeviceSize resourceOffset;
  VkDeviceSize size;
  VkDeviceMemory memory;
  VkDeviceSize memoryOffset;
  SparseMemoryBindMask flags;
};

struct SparseImageMemoryBind {
  ImageSubresource subresource;
  Offset3D offset;
  Extent3D extent;
  VkDeviceMemory memory;
  VkDeviceSize memoryOffset;
  SparseMemoryBindMask flags;
};

struct SparseBufferMemoryBindInfo {
  VkBuffer buffer;
  uint32_t bindCount;
  SparseMemoryBind *pBinds;
};

struct SparseImageOpaqueMemoryBindInfo {
  VkImage image;
  uint32_t bindCount;
  SparseMemoryBind *pBinds;
};

struct SparseImageMemoryBindInfo {
  VkImage image;
  uint32_t bindCount;
  SparseImageMemoryBind *pBinds;
};

struct BindSparseInfo {
  StructureType sType;
  void *pNext;
  uint32_t waitSemaphoreCount;
  VkSemaphore *pWaitSemaphores;
  uint32_t bufferBindCount;
  SparseBufferMemoryBindInfo *pBufferBinds;
  uint32_t imageOpaqueBindCount;
  SparseImageOpaqueMemoryBindInfo *pImageOpaqueBinds;
  uint32_t imageBindCount;
  SparseImageMemoryBindInfo *pImageBinds;
  uint32_t signalSemaphoreCount;
  VkSemaphore *pSignalSemaphores;
};

struct ImageCopy {
  ImageSubresourceLayers srcSubresource;
  Offset3D srcOffset;
  ImageSubresourceLayers dstSubresource;
  Offset3D dstOffset;
  Extent3D extent;
};

struct ImageBlit {
  ImageSubresourceLayers srcSubresource;
  Offset3D srcOffsets[2];
  ImageSubresourceLayers dstSubresource;
  Offset3D dstOffsets[2];
};

struct BufferImageCopy {
  VkDeviceSize bufferOffset;
  uint32_t bufferRowLength;
  uint32_t bufferImageHeight;
  ImageSubresourceLayers imageSubresource;
  Offset3D imageOffset;
  Extent3D imageExtent;
};

struct CopyMemoryIndirectCommandNV {
  VkDeviceAddress srcAddress;
  VkDeviceAddress dstAddress;
  VkDeviceSize size;
};

struct CopyMemoryToImageIndirectCommandNV {
  VkDeviceAddress srcAddress;
  uint32_t bufferRowLength;
  uint32_t bufferImageHeight;
  ImageSubresourceLayers imageSubresource;
  Offset3D imageOffset;
  Extent3D imageExtent;
};

struct ImageResolve {
  ImageSubresourceLayers srcSubresource;
  Offset3D srcOffset;
  ImageSubresourceLayers dstSubresource;
  Offset3D dstOffset;
  Extent3D extent;
};

struct ShaderModuleCreateInfo {
  StructureType sType;
  void *pNext;
  ShaderModuleCreateMask flags;
  size_t codeSize;
  uint32_t *pCode;
};

struct DescriptorSetLayoutBinding {
  uint32_t binding;
  DescriptorType descriptorType;
  uint32_t descriptorCount;
  ShaderStageMask stageFlags;
  VkSampler *pImmutableSamplers;
};

struct DescriptorSetLayoutCreateInfo {
  StructureType sType;
  void *pNext;
  DescriptorSetLayoutCreateMask flags;
  uint32_t bindingCount;
  DescriptorSetLayoutBinding *pBindings;
};

struct DescriptorPoolSize {
  DescriptorType type;
  uint32_t descriptorCount;
};

struct DescriptorPoolCreateInfo {
  StructureType sType;
  void *pNext;
  DescriptorPoolCreateMask flags;
  uint32_t maxSets;
  uint32_t poolSizeCount;
  DescriptorPoolSize *pPoolSizes;
};

struct DescriptorSetAllocateInfo {
  StructureType sType;
  void *pNext;
  VkDescriptorPool descriptorPool;
  uint32_t descriptorSetCount;
  VkDescriptorSetLayout *pSetLayouts;
};

struct SpecializationMapEntry {
  uint32_t constantID;
  uint32_t offset;
  size_t size;
};

struct SpecializationInfo {
  uint32_t mapEntryCount;
  SpecializationMapEntry *pMapEntries;
  size_t dataSize;
  void *pData;
};

struct PipelineShaderStageCreateInfo {
  StructureType sType;
  void *pNext;
  PipelineShaderStageCreateMask flags;
  ShaderStageMaskBits stage;
  VkShaderModule module;
  char *pName;
  SpecializationInfo *pSpecializationInfo;
};

struct ComputePipelineCreateInfo {
  StructureType sType;
  void *pNext;
  PipelineCreateMask flags;
  PipelineShaderStageCreateInfo stage;
  VkPipelineLayout layout;
  VkPipeline basePipelineHandle;
  int32_t basePipelineIndex;
};

struct ComputePipelineIndirectBufferInfoNV {
  StructureType sType;
  void *pNext;
  VkDeviceAddress deviceAddress;
  VkDeviceSize size;
  VkDeviceAddress pipelineDeviceAddressCaptureReplay;
};

struct PipelineCreateFlags2CreateInfoKHR {
  StructureType sType;
  void *pNext;
  PipelineCreateMask2 flags;
};

struct VertexInputBindingDescription {
  uint32_t binding;
  uint32_t stride;
  VertexInputRate inputRate;
};

struct VertexInputAttributeDescription {
  uint32_t location;
  uint32_t binding;
  Format format;
  uint32_t offset;
};

struct PipelineVertexInputStateCreateInfo {
  StructureType sType;
  void *pNext;
  PipelineVertexInputStateCreateMask flags;
  uint32_t vertexBindingDescriptionCount;
  VertexInputBindingDescription *pVertexBindingDescriptions;
  uint32_t vertexAttributeDescriptionCount;
  VertexInputAttributeDescription *pVertexAttributeDescriptions;
};

struct PipelineInputAssemblyStateCreateInfo {
  StructureType sType;
  void *pNext;
  PipelineInputAssemblyStateCreateMask flags;
  PrimitiveTopology topology;
  VkBool32 primitiveRestartEnable;
};

struct PipelineTessellationStateCreateInfo {
  StructureType sType;
  void *pNext;
  PipelineTessellationStateCreateMask flags;
  uint32_t patchControlPoints;
};

struct PipelineViewportStateCreateInfo {
  StructureType sType;
  void *pNext;
  PipelineViewportStateCreateMask flags;
  uint32_t viewportCount;
  Viewport *pViewports;
  uint32_t scissorCount;
  Rect2D *pScissors;
};

struct PipelineRasterizationStateCreateInfo {
  StructureType sType;
  void *pNext;
  PipelineRasterizationStateCreateMask flags;
  VkBool32 depthClampEnable;
  VkBool32 rasterizerDiscardEnable;
  PolygonMode polygonMode;
  CullModeMask cullMode;
  FrontFace frontFace;
  VkBool32 depthBiasEnable;
  float depthBiasConstantFactor;
  float depthBiasClamp;
  float depthBiasSlopeFactor;
  float lineWidth;
};

struct PipelineMultisampleStateCreateInfo {
  StructureType sType;
  void *pNext;
  PipelineMultisampleStateCreateMask flags;
  SampleCountMaskBits rasterizationSamples;
  VkBool32 sampleShadingEnable;
  float minSampleShading;
  VkSampleMask *pSampleMask;
  VkBool32 alphaToCoverageEnable;
  VkBool32 alphaToOneEnable;
};

struct PipelineColorBlendAttachmentState {
  VkBool32 blendEnable;
  BlendFactor srcColorBlendFactor;
  BlendFactor dstColorBlendFactor;
  BlendOp colorBlendOp;
  BlendFactor srcAlphaBlendFactor;
  BlendFactor dstAlphaBlendFactor;
  BlendOp alphaBlendOp;
  ColorComponentMask colorWriteMask;
};

struct PipelineColorBlendStateCreateInfo {
  StructureType sType;
  void *pNext;
  PipelineColorBlendStateCreateMask flags;
  VkBool32 logicOpEnable;
  LogicOp logicOp;
  uint32_t attachmentCount;
  PipelineColorBlendAttachmentState *pAttachments;
  float blendConstants[4];
};

struct PipelineDynamicStateCreateInfo {
  StructureType sType;
  void *pNext;
  PipelineDynamicStateCreateMask flags;
  uint32_t dynamicStateCount;
  DynamicState *pDynamicStates;
};

struct StencilOpState {
  StencilOp failOp;
  StencilOp passOp;
  StencilOp depthFailOp;
  CompareOp compareOp;
  uint32_t compareMask;
  uint32_t writeMask;
  uint32_t reference;
};

struct PipelineDepthStencilStateCreateInfo {
  StructureType sType;
  void *pNext;
  PipelineDepthStencilStateCreateMask flags;
  VkBool32 depthTestEnable;
  VkBool32 depthWriteEnable;
  CompareOp depthCompareOp;
  VkBool32 depthBoundsTestEnable;
  VkBool32 stencilTestEnable;
  StencilOpState front;
  StencilOpState back;
  float minDepthBounds;
  float maxDepthBounds;
};

struct GraphicsPipelineCreateInfo {
  StructureType sType;
  void *pNext;
  PipelineCreateMask flags;
  uint32_t stageCount;
  PipelineShaderStageCreateInfo *pStages;
  PipelineVertexInputStateCreateInfo *pVertexInputState;
  PipelineInputAssemblyStateCreateInfo *pInputAssemblyState;
  PipelineTessellationStateCreateInfo *pTessellationState;
  PipelineViewportStateCreateInfo *pViewportState;
  PipelineRasterizationStateCreateInfo *pRasterizationState;
  PipelineMultisampleStateCreateInfo *pMultisampleState;
  PipelineDepthStencilStateCreateInfo *pDepthStencilState;
  PipelineColorBlendStateCreateInfo *pColorBlendState;
  PipelineDynamicStateCreateInfo *pDynamicState;
  VkPipelineLayout layout;
  VkRenderPass renderPass;
  uint32_t subpass;
  VkPipeline basePipelineHandle;
  int32_t basePipelineIndex;
};

struct PipelineCacheCreateInfo {
  StructureType sType;
  void *pNext;
  PipelineCacheCreateMask flags;
  size_t initialDataSize;
  void *pInitialData;
};

struct PipelineCacheHeaderVersionOne {
  uint32_t headerSize;
  PipelineCacheHeaderVersion headerVersion;
  uint32_t vendorID;
  uint32_t deviceID;
  uint8_t pipelineCacheUUID[VK_UUID_SIZE];
};

struct PushConstantRange {
  ShaderStageMask stageFlags;
  uint32_t offset;
  uint32_t size;
};

struct PipelineLayoutCreateInfo {
  StructureType sType;
  void *pNext;
  PipelineLayoutCreateMask flags;
  uint32_t setLayoutCount;
  VkDescriptorSetLayout *pSetLayouts;
  uint32_t pushConstantRangeCount;
  PushConstantRange *pPushConstantRanges;
};

struct SamplerCreateInfo {
  StructureType sType;
  void *pNext;
  SamplerCreateMask flags;
  Filter magFilter;
  Filter minFilter;
  SamplerMipmapMode mipmapMode;
  SamplerAddressMode addressModeU;
  SamplerAddressMode addressModeV;
  SamplerAddressMode addressModeW;
  float mipLodBias;
  VkBool32 anisotropyEnable;
  float maxAnisotropy;
  VkBool32 compareEnable;
  CompareOp compareOp;
  float minLod;
  float maxLod;
  BorderColor borderColor;
  VkBool32 unnormalizedCoordinates;
};

struct CommandPoolCreateInfo {
  StructureType sType;
  void *pNext;
  CommandPoolCreateMask flags;
  uint32_t queueFamilyIndex;
};

struct CommandBufferAllocateInfo {
  StructureType sType;
  void *pNext;
  VkCommandPool commandPool;
  CommandBufferLevel level;
  uint32_t commandBufferCount;
};

struct CommandBufferInheritanceInfo {
  StructureType sType;
  void *pNext;
  VkRenderPass renderPass;
  uint32_t subpass;
  VkFramebuffer framebuffer;
  VkBool32 occlusionQueryEnable;
  QueryControlMask queryFlags;
  QueryPipelineStatisticMask pipelineStatistics;
};

struct CommandBufferBeginInfo {
  StructureType sType;
  void *pNext;
  CommandBufferUsageMask flags;
  CommandBufferInheritanceInfo *pInheritanceInfo;
};

struct RenderPassBeginInfo {
  StructureType sType;
  void *pNext;
  VkRenderPass renderPass;
  VkFramebuffer framebuffer;
  Rect2D renderArea;
  uint32_t clearValueCount;
  VkClearValue *pClearValues;
};

struct ClearDepthStencilValue {
  float depth;
  uint32_t stencil;
};

struct ClearAttachment {
  ImageAspectMask aspectMask;
  uint32_t colorAttachment;
  VkClearValue clearValue;
};

struct AttachmentDescription {
  AttachmentDescriptionMask flags;
  Format format;
  SampleCountMaskBits samples;
  AttachmentLoadOp loadOp;
  AttachmentStoreOp storeOp;
  AttachmentLoadOp stencilLoadOp;
  AttachmentStoreOp stencilStoreOp;
  ImageLayout initialLayout;
  ImageLayout finalLayout;
};

struct AttachmentReference {
  uint32_t attachment;
  ImageLayout layout;
};

struct SubpassDescription {
  SubpassDescriptionMask flags;
  PipelineBindPoint pipelineBindPoint;
  uint32_t inputAttachmentCount;
  AttachmentReference *pInputAttachments;
  uint32_t colorAttachmentCount;
  AttachmentReference *pColorAttachments;
  AttachmentReference *pResolveAttachments;
  AttachmentReference *pDepthStencilAttachment;
  uint32_t preserveAttachmentCount;
  uint32_t *pPreserveAttachments;
};

struct SubpassDependency {
  uint32_t srcSubpass;
  uint32_t dstSubpass;
  PipelineStageMask srcStageMask;
  PipelineStageMask dstStageMask;
  AccessMask srcAccessMask;
  AccessMask dstAccessMask;
  DependencyMask dependencyFlags;
};

struct RenderPassCreateInfo {
  StructureType sType;
  void *pNext;
  RenderPassCreateMask flags;
  uint32_t attachmentCount;
  AttachmentDescription *pAttachments;
  uint32_t subpassCount;
  SubpassDescription *pSubpasses;
  uint32_t dependencyCount;
  SubpassDependency *pDependencies;
};

struct EventCreateInfo {
  StructureType sType;
  void *pNext;
  EventCreateMask flags;
};

struct FenceCreateInfo {
  StructureType sType;
  void *pNext;
  FenceCreateMask flags;
};

struct SemaphoreCreateInfo {
  StructureType sType;
  void *pNext;
  SemaphoreCreateMask flags;
};

struct QueryPoolCreateInfo {
  StructureType sType;
  void *pNext;
  QueryPoolCreateMask flags;
  QueryType queryType;
  uint32_t queryCount;
  QueryPipelineStatisticMask pipelineStatistics;
};

struct FramebufferCreateInfo {
  StructureType sType;
  void *pNext;
  FramebufferCreateMask flags;
  VkRenderPass renderPass;
  uint32_t attachmentCount;
  VkImageView *pAttachments;
  uint32_t width;
  uint32_t height;
  uint32_t layers;
};

struct DrawIndirectCommand {
  uint32_t vertexCount;
  uint32_t instanceCount;
  uint32_t firstVertex;
  uint32_t firstInstance;
};

struct DrawIndexedIndirectCommand {
  uint32_t indexCount;
  uint32_t instanceCount;
  uint32_t firstIndex;
  int32_t vertexOffset;
  uint32_t firstInstance;
};

struct DispatchIndirectCommand {
  uint32_t x;
  uint32_t y;
  uint32_t z;
};

struct MultiDrawInfoEXT {
  uint32_t firstVertex;
  uint32_t vertexCount;
};

struct MultiDrawIndexedInfoEXT {
  uint32_t firstIndex;
  uint32_t indexCount;
  int32_t vertexOffset;
};

struct SubmitInfo {
  StructureType sType;
  void *pNext;
  uint32_t waitSemaphoreCount;
  VkSemaphore *pWaitSemaphores;
  PipelineStageMask *pWaitDstStageMask;
  uint32_t commandBufferCount;
  VkCommandBuffer *pCommandBuffers;
  uint32_t signalSemaphoreCount;
  VkSemaphore *pSignalSemaphores;
};

struct DisplayPropertiesKHR {
  VkDisplayKHR display;
  char *displayName;
  Extent2D physicalDimensions;
  Extent2D physicalResolution;
  SurfaceTransformMask supportedTransforms;
  VkBool32 planeReorderPossible;
  VkBool32 persistentContent;
};

struct DisplayPlanePropertiesKHR {
  VkDisplayKHR currentDisplay;
  uint32_t currentStackIndex;
};

struct DisplayModeParametersKHR {
  Extent2D visibleRegion;
  uint32_t refreshRate;
};

struct DisplayModePropertiesKHR {
  VkDisplayModeKHR displayMode;
  DisplayModeParametersKHR parameters;
};

struct DisplayModeCreateInfoKHR {
  StructureType sType;
  void *pNext;
  DisplayModeCreateMask flags;
  DisplayModeParametersKHR parameters;
};

struct DisplayPlaneCapabilitiesKHR {
  DisplayPlaneAlphaMask supportedAlpha;
  Offset2D minSrcPosition;
  Offset2D maxSrcPosition;
  Extent2D minSrcExtent;
  Extent2D maxSrcExtent;
  Offset2D minDstPosition;
  Offset2D maxDstPosition;
  Extent2D minDstExtent;
  Extent2D maxDstExtent;
};

struct DisplaySurfaceCreateInfoKHR {
  StructureType sType;
  void *pNext;
  DisplaySurfaceCreateMask flags;
  VkDisplayModeKHR displayMode;
  uint32_t planeIndex;
  uint32_t planeStackIndex;
  SurfaceTransformMaskBits transform;
  float globalAlpha;
  DisplayPlaneAlphaMaskBits alphaMode;
  Extent2D imageExtent;
};

struct DisplayPresentInfoKHR {
  StructureType sType;
  void *pNext;
  Rect2D srcRect;
  Rect2D dstRect;
  VkBool32 persistent;
};

struct SurfaceCapabilitiesKHR {
  uint32_t minImageCount;
  uint32_t maxImageCount;
  Extent2D currentExtent;
  Extent2D minImageExtent;
  Extent2D maxImageExtent;
  uint32_t maxImageArrayLayers;
  SurfaceTransformMask supportedTransforms;
  SurfaceTransformMaskBits currentTransform;
  CompositeAlphaMask supportedCompositeAlpha;
  ImageUsageMask supportedUsageFlags;
};

struct SurfaceFormatKHR {
  Format format;
  ColorSpace colorSpace;
};

struct SwapchainCreateInfoKHR {
  StructureType sType;
  void *pNext;
  SwapchainCreateMask flags;
  VkSurfaceKHR surface;
  uint32_t minImageCount;
  Format imageFormat;
  ColorSpace imageColorSpace;
  Extent2D imageExtent;
  uint32_t imageArrayLayers;
  ImageUsageMask imageUsage;
  SharingMode imageSharingMode;
  uint32_t queueFamilyIndexCount;
  uint32_t *pQueueFamilyIndices;
  SurfaceTransformMaskBits preTransform;
  CompositeAlphaMaskBits compositeAlpha;
  PresentMode presentMode;
  VkBool32 clipped;
  VkSwapchainKHR oldSwapchain;
};

struct PresentInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t waitSemaphoreCount;
  VkSemaphore *pWaitSemaphores;
  uint32_t swapchainCount;
  VkSwapchainKHR *pSwapchains;
  uint32_t *pImageIndices;
  Result *pResults;
};

struct DebugReportCallbackCreateInfoEXT {
  StructureType sType;
  void *pNext;
  DebugReportMask flags;
  PFN_vkDebugReportCallbackEXT pfnCallback;
  void *pUserData;
};

struct ValidationFlagsEXT {
  StructureType sType;
  void *pNext;
  uint32_t disabledValidationCheckCount;
  ValidationCheck *pDisabledValidationChecks;
};

struct ValidationFeaturesEXT {
  StructureType sType;
  void *pNext;
  uint32_t enabledValidationFeatureCount;
  ValidationFeatureEnable *pEnabledValidationFeatures;
  uint32_t disabledValidationFeatureCount;
  ValidationFeatureDisable *pDisabledValidationFeatures;
};

struct LayerSettingEXT {
  char *pLayerName;
  char *pSettingName;
  LayerSettingType type;
  uint32_t valueCount;
  void *pValues;
};

struct LayerSettingsCreateInfoEXT {
  StructureType sType;
  void *pNext;
  uint32_t settingCount;
  LayerSettingEXT *pSettings;
};

struct PipelineRasterizationStateRasterizationOrderAMD {
  StructureType sType;
  void *pNext;
  RasterizationOrder rasterizationOrder;
};

struct DebugMarkerObjectNameInfoEXT {
  StructureType sType;
  void *pNext;
  DebugReportObjectType objectType;
  uint64_t object;
  char *pObjectName;
};

struct DebugMarkerObjectTagInfoEXT {
  StructureType sType;
  void *pNext;
  DebugReportObjectType objectType;
  uint64_t object;
  uint64_t tagName;
  size_t tagSize;
  void *pTag;
};

struct DebugMarkerMarkerInfoEXT {
  StructureType sType;
  void *pNext;
  char *pMarkerName;
  float color[4];
};

struct DedicatedAllocationImageCreateInfoNV {
  StructureType sType;
  void *pNext;
  VkBool32 dedicatedAllocation;
};

struct DedicatedAllocationBufferCreateInfoNV {
  StructureType sType;
  void *pNext;
  VkBool32 dedicatedAllocation;
};

struct DedicatedAllocationMemoryAllocateInfoNV {
  StructureType sType;
  void *pNext;
  VkImage image;
  VkBuffer buffer;
};

struct ExternalImageFormatPropertiesNV {
  ImageFormatProperties imageFormatProperties;
  ExternalMemoryFeatureMask externalMemoryFeatures;
  ExternalMemoryHandleTypeMask exportFromImportedHandleTypes;
  ExternalMemoryHandleTypeMask compatibleHandleTypes;
};

struct ExternalMemoryImageCreateInfoNV {
  StructureType sType;
  void *pNext;
  ExternalMemoryHandleTypeMask handleTypes;
};

struct ExportMemoryAllocateInfoNV {
  StructureType sType;
  void *pNext;
  ExternalMemoryHandleTypeMask handleTypes;
};

struct PhysicalDeviceDeviceGeneratedCommandsFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 deviceGeneratedCommands;
};

struct PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 deviceGeneratedCompute;
  VkBool32 deviceGeneratedComputePipelines;
  VkBool32 deviceGeneratedComputeCaptureReplay;
};

struct DevicePrivateDataCreateInfo {
  StructureType sType;
  void *pNext;
  uint32_t privateDataSlotRequestCount;
};

struct PrivateDataSlotCreateInfo {
  StructureType sType;
  void *pNext;
  PrivateDataSlotCreateMask flags;
};

struct PhysicalDevicePrivateDataFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 privateData;
};

struct PhysicalDeviceDeviceGeneratedCommandsPropertiesNV {
  StructureType sType;
  void *pNext;
  uint32_t maxGraphicsShaderGroupCount;
  uint32_t maxIndirectSequenceCount;
  uint32_t maxIndirectCommandsTokenCount;
  uint32_t maxIndirectCommandsStreamCount;
  uint32_t maxIndirectCommandsTokenOffset;
  uint32_t maxIndirectCommandsStreamStride;
  uint32_t minSequencesCountBufferOffsetAlignment;
  uint32_t minSequencesIndexBufferOffsetAlignment;
  uint32_t minIndirectCommandsBufferOffsetAlignment;
};

struct PhysicalDeviceMultiDrawPropertiesEXT {
  StructureType sType;
  void *pNext;
  uint32_t maxMultiDrawCount;
};

struct GraphicsShaderGroupCreateInfoNV {
  StructureType sType;
  void *pNext;
  uint32_t stageCount;
  PipelineShaderStageCreateInfo *pStages;
  PipelineVertexInputStateCreateInfo *pVertexInputState;
  PipelineTessellationStateCreateInfo *pTessellationState;
};

struct GraphicsPipelineShaderGroupsCreateInfoNV {
  StructureType sType;
  void *pNext;
  uint32_t groupCount;
  GraphicsShaderGroupCreateInfoNV *pGroups;
  uint32_t pipelineCount;
  VkPipeline *pPipelines;
};

struct BindShaderGroupIndirectCommandNV {
  uint32_t groupIndex;
};

struct BindIndexBufferIndirectCommandNV {
  VkDeviceAddress bufferAddress;
  uint32_t size;
  IndexType indexType;
};

struct BindVertexBufferIndirectCommandNV {
  VkDeviceAddress bufferAddress;
  uint32_t size;
  uint32_t stride;
};

struct SetStateFlagsIndirectCommandNV {
  uint32_t data;
};

struct IndirectCommandsStreamNV {
  VkBuffer buffer;
  VkDeviceSize offset;
};

struct IndirectCommandsLayoutTokenNV {
  StructureType sType;
  void *pNext;
  IndirectCommandsTokenType tokenType;
  uint32_t stream;
  uint32_t offset;
  uint32_t vertexBindingUnit;
  VkBool32 vertexDynamicStride;
  VkPipelineLayout pushconstantPipelineLayout;
  ShaderStageMask pushconstantShaderStageFlags;
  uint32_t pushconstantOffset;
  uint32_t pushconstantSize;
  IndirectStateMask indirectStateFlags;
  uint32_t indexTypeCount;
  IndexType *pIndexTypes;
  uint32_t *pIndexTypeValues;
};

struct IndirectCommandsLayoutCreateInfoNV {
  StructureType sType;
  void *pNext;
  IndirectCommandsLayoutUsageMask flags;
  PipelineBindPoint pipelineBindPoint;
  uint32_t tokenCount;
  IndirectCommandsLayoutTokenNV *pTokens;
  uint32_t streamCount;
  uint32_t *pStreamStrides;
};

struct GeneratedCommandsInfoNV {
  StructureType sType;
  void *pNext;
  PipelineBindPoint pipelineBindPoint;
  VkPipeline pipeline;
  VkIndirectCommandsLayoutNV indirectCommandsLayout;
  uint32_t streamCount;
  IndirectCommandsStreamNV *pStreams;
  uint32_t sequencesCount;
  VkBuffer preprocessBuffer;
  VkDeviceSize preprocessOffset;
  VkDeviceSize preprocessSize;
  VkBuffer sequencesCountBuffer;
  VkDeviceSize sequencesCountOffset;
  VkBuffer sequencesIndexBuffer;
  VkDeviceSize sequencesIndexOffset;
};

struct GeneratedCommandsMemoryRequirementsInfoNV {
  StructureType sType;
  void *pNext;
  PipelineBindPoint pipelineBindPoint;
  VkPipeline pipeline;
  VkIndirectCommandsLayoutNV indirectCommandsLayout;
  uint32_t maxSequencesCount;
};

struct PipelineIndirectDeviceAddressInfoNV {
  StructureType sType;
  void *pNext;
  PipelineBindPoint pipelineBindPoint;
  VkPipeline pipeline;
};

struct BindPipelineIndirectCommandNV {
  VkDeviceAddress pipelineAddress;
};

struct PhysicalDeviceFeatures2 {
  StructureType sType;
  void *pNext;
  PhysicalDeviceFeatures features;
};

struct PhysicalDeviceProperties2 {
  StructureType sType;
  void *pNext;
  PhysicalDeviceProperties properties;
};

struct FormatProperties2 {
  StructureType sType;
  void *pNext;
  FormatProperties formatProperties;
};

struct ImageFormatProperties2 {
  StructureType sType;
  void *pNext;
  ImageFormatProperties imageFormatProperties;
};

struct PhysicalDeviceImageFormatInfo2 {
  StructureType sType;
  void *pNext;
  Format format;
  ImageType type;
  ImageTiling tiling;
  ImageUsageMask usage;
  ImageCreateMask flags;
};

struct QueueFamilyProperties2 {
  StructureType sType;
  void *pNext;
  QueueFamilyProperties queueFamilyProperties;
};

struct PhysicalDeviceMemoryProperties2 {
  StructureType sType;
  void *pNext;
  PhysicalDeviceMemoryProperties memoryProperties;
};

struct SparseImageFormatProperties2 {
  StructureType sType;
  void *pNext;
  SparseImageFormatProperties properties;
};

struct PhysicalDeviceSparseImageFormatInfo2 {
  StructureType sType;
  void *pNext;
  Format format;
  ImageType type;
  SampleCountMaskBits samples;
  ImageUsageMask usage;
  ImageTiling tiling;
};

struct PhysicalDevicePushDescriptorPropertiesKHR {
  StructureType sType;
  void *pNext;
  uint32_t maxPushDescriptors;
};

struct ConformanceVersion {
  uint8_t major;
  uint8_t minor;
  uint8_t subminor;
  uint8_t patch;
};

struct PhysicalDeviceDriverProperties {
  StructureType sType;
  void *pNext;
  DriverId driverID;
  char driverName[VK_MAX_DRIVER_NAME_SIZE];
  char driverInfo[VK_MAX_DRIVER_INFO_SIZE];
  ConformanceVersion conformanceVersion;
};

struct RectLayerKHR {
  Offset2D offset;
  Extent2D extent;
  uint32_t layer;
};

struct PresentRegionKHR {
  uint32_t rectangleCount;
  RectLayerKHR *pRectangles;
};

struct PresentRegionsKHR {
  StructureType sType;
  void *pNext;
  uint32_t swapchainCount;
  PresentRegionKHR *pRegions;
};

struct PhysicalDeviceVariablePointersFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 variablePointersStorageBuffer;
  VkBool32 variablePointers;
};

struct ExternalMemoryProperties {
  ExternalMemoryFeatureMask externalMemoryFeatures;
  ExternalMemoryHandleTypeMask exportFromImportedHandleTypes;
  ExternalMemoryHandleTypeMask compatibleHandleTypes;
};

struct PhysicalDeviceExternalImageFormatInfo {
  StructureType sType;
  void *pNext;
  ExternalMemoryHandleTypeMaskBits handleType;
};

struct ExternalImageFormatProperties {
  StructureType sType;
  void *pNext;
  ExternalMemoryProperties externalMemoryProperties;
};

struct PhysicalDeviceExternalBufferInfo {
  StructureType sType;
  void *pNext;
  BufferCreateMask flags;
  BufferUsageMask usage;
  ExternalMemoryHandleTypeMaskBits handleType;
};

struct ExternalBufferProperties {
  StructureType sType;
  void *pNext;
  ExternalMemoryProperties externalMemoryProperties;
};

struct PhysicalDeviceIDProperties {
  StructureType sType;
  void *pNext;
  uint8_t deviceUUID[VK_UUID_SIZE];
  uint8_t driverUUID[VK_UUID_SIZE];
  uint8_t deviceLUID[VK_LUID_SIZE];
  uint32_t deviceNodeMask;
  VkBool32 deviceLUIDValid;
};

struct ExternalMemoryImageCreateInfo {
  StructureType sType;
  void *pNext;
  ExternalMemoryHandleTypeMask handleTypes;
};

struct ExternalMemoryBufferCreateInfo {
  StructureType sType;
  void *pNext;
  ExternalMemoryHandleTypeMask handleTypes;
};

struct ExportMemoryAllocateInfo {
  StructureType sType;
  void *pNext;
  ExternalMemoryHandleTypeMask handleTypes;
};

struct ImportMemoryFdInfoKHR {
  StructureType sType;
  void *pNext;
  ExternalMemoryHandleTypeMaskBits handleType;
  int fd;
};

struct MemoryFdPropertiesKHR {
  StructureType sType;
  void *pNext;
  uint32_t memoryTypeBits;
};

struct MemoryGetFdInfoKHR {
  StructureType sType;
  void *pNext;
  VkDeviceMemory memory;
  ExternalMemoryHandleTypeMaskBits handleType;
};

struct PhysicalDeviceExternalSemaphoreInfo {
  StructureType sType;
  void *pNext;
  ExternalSemaphoreHandleTypeMaskBits handleType;
};

struct ExternalSemaphoreProperties {
  StructureType sType;
  void *pNext;
  ExternalSemaphoreHandleTypeMask exportFromImportedHandleTypes;
  ExternalSemaphoreHandleTypeMask compatibleHandleTypes;
  ExternalSemaphoreFeatureMask externalSemaphoreFeatures;
};

struct ExportSemaphoreCreateInfo {
  StructureType sType;
  void *pNext;
  ExternalSemaphoreHandleTypeMask handleTypes;
};

struct ImportSemaphoreFdInfoKHR {
  StructureType sType;
  void *pNext;
  VkSemaphore semaphore;
  SemaphoreImportMask flags;
  ExternalSemaphoreHandleTypeMaskBits handleType;
  int fd;
};

struct SemaphoreGetFdInfoKHR {
  StructureType sType;
  void *pNext;
  VkSemaphore semaphore;
  ExternalSemaphoreHandleTypeMaskBits handleType;
};

struct PhysicalDeviceExternalFenceInfo {
  StructureType sType;
  void *pNext;
  ExternalFenceHandleTypeMaskBits handleType;
};

struct ExternalFenceProperties {
  StructureType sType;
  void *pNext;
  ExternalFenceHandleTypeMask exportFromImportedHandleTypes;
  ExternalFenceHandleTypeMask compatibleHandleTypes;
  ExternalFenceFeatureMask externalFenceFeatures;
};

struct ExportFenceCreateInfo {
  StructureType sType;
  void *pNext;
  ExternalFenceHandleTypeMask handleTypes;
};

struct ImportFenceFdInfoKHR {
  StructureType sType;
  void *pNext;
  VkFence fence;
  FenceImportMask flags;
  ExternalFenceHandleTypeMaskBits handleType;
  int fd;
};

struct FenceGetFdInfoKHR {
  StructureType sType;
  void *pNext;
  VkFence fence;
  ExternalFenceHandleTypeMaskBits handleType;
};

struct PhysicalDeviceMultiviewFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 multiview;
  VkBool32 multiviewGeometryShader;
  VkBool32 multiviewTessellationShader;
};

struct PhysicalDeviceMultiviewProperties {
  StructureType sType;
  void *pNext;
  uint32_t maxMultiviewViewCount;
  uint32_t maxMultiviewInstanceIndex;
};

struct RenderPassMultiviewCreateInfo {
  StructureType sType;
  void *pNext;
  uint32_t subpassCount;
  uint32_t *pViewMasks;
  uint32_t dependencyCount;
  int32_t *pViewOffsets;
  uint32_t correlationMaskCount;
  uint32_t *pCorrelationMasks;
};

struct SurfaceCapabilities2EXT {
  StructureType sType;
  void *pNext;
  uint32_t minImageCount;
  uint32_t maxImageCount;
  Extent2D currentExtent;
  Extent2D minImageExtent;
  Extent2D maxImageExtent;
  uint32_t maxImageArrayLayers;
  SurfaceTransformMask supportedTransforms;
  SurfaceTransformMaskBits currentTransform;
  CompositeAlphaMask supportedCompositeAlpha;
  ImageUsageMask supportedUsageFlags;
  SurfaceCounterMask supportedSurfaceCounters;
};

struct DisplayPowerInfoEXT {
  StructureType sType;
  void *pNext;
  DisplayPowerState powerState;
};

struct DeviceEventInfoEXT {
  StructureType sType;
  void *pNext;
  DeviceEventType deviceEvent;
};

struct DisplayEventInfoEXT {
  StructureType sType;
  void *pNext;
  DisplayEventType displayEvent;
};

struct SwapchainCounterCreateInfoEXT {
  StructureType sType;
  void *pNext;
  SurfaceCounterMask surfaceCounters;
};

struct PhysicalDeviceGroupProperties {
  StructureType sType;
  void *pNext;
  uint32_t physicalDeviceCount;
  VkPhysicalDevice physicalDevices[VK_MAX_DEVICE_GROUP_SIZE];
  VkBool32 subsetAllocation;
};

struct MemoryAllocateFlagsInfo {
  StructureType sType;
  void *pNext;
  MemoryAllocateMask flags;
  uint32_t deviceMask;
};

struct BindBufferMemoryInfo {
  StructureType sType;
  void *pNext;
  VkBuffer buffer;
  VkDeviceMemory memory;
  VkDeviceSize memoryOffset;
};

struct BindBufferMemoryDeviceGroupInfo {
  StructureType sType;
  void *pNext;
  uint32_t deviceIndexCount;
  uint32_t *pDeviceIndices;
};

struct BindImageMemoryInfo {
  StructureType sType;
  void *pNext;
  VkImage image;
  VkDeviceMemory memory;
  VkDeviceSize memoryOffset;
};

struct BindImageMemoryDeviceGroupInfo {
  StructureType sType;
  void *pNext;
  uint32_t deviceIndexCount;
  uint32_t *pDeviceIndices;
  uint32_t splitInstanceBindRegionCount;
  Rect2D *pSplitInstanceBindRegions;
};

struct DeviceGroupRenderPassBeginInfo {
  StructureType sType;
  void *pNext;
  uint32_t deviceMask;
  uint32_t deviceRenderAreaCount;
  Rect2D *pDeviceRenderAreas;
};

struct DeviceGroupCommandBufferBeginInfo {
  StructureType sType;
  void *pNext;
  uint32_t deviceMask;
};

struct DeviceGroupSubmitInfo {
  StructureType sType;
  void *pNext;
  uint32_t waitSemaphoreCount;
  uint32_t *pWaitSemaphoreDeviceIndices;
  uint32_t commandBufferCount;
  uint32_t *pCommandBufferDeviceMasks;
  uint32_t signalSemaphoreCount;
  uint32_t *pSignalSemaphoreDeviceIndices;
};

struct DeviceGroupBindSparseInfo {
  StructureType sType;
  void *pNext;
  uint32_t resourceDeviceIndex;
  uint32_t memoryDeviceIndex;
};

struct DeviceGroupPresentCapabilitiesKHR {
  StructureType sType;
  void *pNext;
  uint32_t presentMask[VK_MAX_DEVICE_GROUP_SIZE];
  DeviceGroupPresentModeMask modes;
};

struct ImageSwapchainCreateInfoKHR {
  StructureType sType;
  void *pNext;
  VkSwapchainKHR swapchain;
};

struct BindImageMemorySwapchainInfoKHR {
  StructureType sType;
  void *pNext;
  VkSwapchainKHR swapchain;
  uint32_t imageIndex;
};

struct AcquireNextImageInfoKHR {
  StructureType sType;
  void *pNext;
  VkSwapchainKHR swapchain;
  uint64_t timeout;
  VkSemaphore semaphore;
  VkFence fence;
  uint32_t deviceMask;
};

struct DeviceGroupPresentInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t swapchainCount;
  uint32_t *pDeviceMasks;
  DeviceGroupPresentModeMaskBits mode;
};

struct DeviceGroupDeviceCreateInfo {
  StructureType sType;
  void *pNext;
  uint32_t physicalDeviceCount;
  VkPhysicalDevice *pPhysicalDevices;
};

struct DeviceGroupSwapchainCreateInfoKHR {
  StructureType sType;
  void *pNext;
  DeviceGroupPresentModeMask modes;
};

struct DescriptorUpdateTemplateEntry {
  uint32_t dstBinding;
  uint32_t dstArrayElement;
  uint32_t descriptorCount;
  DescriptorType descriptorType;
  size_t offset;
  size_t stride;
};

struct DescriptorUpdateTemplateCreateInfo {
  StructureType sType;
  void *pNext;
  DescriptorUpdateTemplateCreateMask flags;
  uint32_t descriptorUpdateEntryCount;
  DescriptorUpdateTemplateEntry *pDescriptorUpdateEntries;
  DescriptorUpdateTemplateType templateType;
  VkDescriptorSetLayout descriptorSetLayout;
  PipelineBindPoint pipelineBindPoint;
  VkPipelineLayout pipelineLayout;
  uint32_t set;
};

struct XYColorEXT {
  float x;
  float y;
};

struct PhysicalDevicePresentIdFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 presentId;
};

struct PresentIdKHR {
  StructureType sType;
  void *pNext;
  uint32_t swapchainCount;
  uint64_t *pPresentIds;
};

struct PhysicalDevicePresentWaitFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 presentWait;
};

struct HdrMetadataEXT {
  StructureType sType;
  void *pNext;
  XYColorEXT displayPrimaryRed;
  XYColorEXT displayPrimaryGreen;
  XYColorEXT displayPrimaryBlue;
  XYColorEXT whitePoint;
  float maxLuminance;
  float minLuminance;
  float maxContentLightLevel;
  float maxFrameAverageLightLevel;
};

struct DisplayNativeHdrSurfaceCapabilitiesAMD {
  StructureType sType;
  void *pNext;
  VkBool32 localDimmingSupport;
};

struct SwapchainDisplayNativeHdrCreateInfoAMD {
  StructureType sType;
  void *pNext;
  VkBool32 localDimmingEnable;
};

struct RefreshCycleDurationGOOGLE {
  uint64_t refreshDuration;
};

struct PastPresentationTimingGOOGLE {
  uint32_t presentID;
  uint64_t desiredPresentTime;
  uint64_t actualPresentTime;
  uint64_t earliestPresentTime;
  uint64_t presentMargin;
};

struct PresentTimeGOOGLE {
  uint32_t presentID;
  uint64_t desiredPresentTime;
};

struct PresentTimesInfoGOOGLE {
  StructureType sType;
  void *pNext;
  uint32_t swapchainCount;
  PresentTimeGOOGLE *pTimes;
};

struct ViewportWScalingNV {
  float xcoeff;
  float ycoeff;
};

struct PipelineViewportWScalingStateCreateInfoNV {
  StructureType sType;
  void *pNext;
  VkBool32 viewportWScalingEnable;
  uint32_t viewportCount;
  ViewportWScalingNV *pViewportWScalings;
};

struct ViewportSwizzleNV {
  ViewportCoordinateSwizzle x;
  ViewportCoordinateSwizzle y;
  ViewportCoordinateSwizzle z;
  ViewportCoordinateSwizzle w;
};

struct PipelineViewportSwizzleStateCreateInfoNV {
  StructureType sType;
  void *pNext;
  PipelineViewportSwizzleStateCreateMask flags;
  uint32_t viewportCount;
  ViewportSwizzleNV *pViewportSwizzles;
};

struct PhysicalDeviceDiscardRectanglePropertiesEXT {
  StructureType sType;
  void *pNext;
  uint32_t maxDiscardRectangles;
};

struct PipelineDiscardRectangleStateCreateInfoEXT {
  StructureType sType;
  void *pNext;
  PipelineDiscardRectangleStateCreateMask flags;
  DiscardRectangleMode discardRectangleMode;
  uint32_t discardRectangleCount;
  Rect2D *pDiscardRectangles;
};

struct PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX {
  StructureType sType;
  void *pNext;
  VkBool32 perViewPositionAllComponents;
};

struct InputAttachmentAspectReference {
  uint32_t subpass;
  uint32_t inputAttachmentIndex;
  ImageAspectMask aspectMask;
};

struct RenderPassInputAttachmentAspectCreateInfo {
  StructureType sType;
  void *pNext;
  uint32_t aspectReferenceCount;
  InputAttachmentAspectReference *pAspectReferences;
};

struct PhysicalDeviceSurfaceInfo2KHR {
  StructureType sType;
  void *pNext;
  VkSurfaceKHR surface;
};

struct SurfaceCapabilities2KHR {
  StructureType sType;
  void *pNext;
  SurfaceCapabilitiesKHR surfaceCapabilities;
};

struct SurfaceFormat2KHR {
  StructureType sType;
  void *pNext;
  SurfaceFormatKHR surfaceFormat;
};

struct DisplayProperties2KHR {
  StructureType sType;
  void *pNext;
  DisplayPropertiesKHR displayProperties;
};

struct DisplayPlaneProperties2KHR {
  StructureType sType;
  void *pNext;
  DisplayPlanePropertiesKHR displayPlaneProperties;
};

struct DisplayModeProperties2KHR {
  StructureType sType;
  void *pNext;
  DisplayModePropertiesKHR displayModeProperties;
};

struct DisplayPlaneInfo2KHR {
  StructureType sType;
  void *pNext;
  VkDisplayModeKHR mode;
  uint32_t planeIndex;
};

struct DisplayPlaneCapabilities2KHR {
  StructureType sType;
  void *pNext;
  DisplayPlaneCapabilitiesKHR capabilities;
};

struct SharedPresentSurfaceCapabilitiesKHR {
  StructureType sType;
  void *pNext;
  ImageUsageMask sharedPresentSupportedUsageFlags;
};

struct PhysicalDevice16BitStorageFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 storageBuffer16BitAccess;
  VkBool32 uniformAndStorageBuffer16BitAccess;
  VkBool32 storagePushConstant16;
  VkBool32 storageInputOutput16;
};

struct PhysicalDeviceSubgroupProperties {
  StructureType sType;
  void *pNext;
  uint32_t subgroupSize;
  ShaderStageMask supportedStages;
  SubgroupFeatureMask supportedOperations;
  VkBool32 quadOperationsInAllStages;
};

struct PhysicalDeviceShaderSubgroupExtendedTypesFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 shaderSubgroupExtendedTypes;
};

struct BufferMemoryRequirementsInfo2 {
  StructureType sType;
  void *pNext;
  VkBuffer buffer;
};

struct DeviceBufferMemoryRequirements {
  StructureType sType;
  void *pNext;
  BufferCreateInfo *pCreateInfo;
};

struct ImageMemoryRequirementsInfo2 {
  StructureType sType;
  void *pNext;
  VkImage image;
};

struct ImageSparseMemoryRequirementsInfo2 {
  StructureType sType;
  void *pNext;
  VkImage image;
};

struct DeviceImageMemoryRequirements {
  StructureType sType;
  void *pNext;
  ImageCreateInfo *pCreateInfo;
  ImageAspectMaskBits planeAspect;
};

struct MemoryRequirements2 {
  StructureType sType;
  void *pNext;
  MemoryRequirements memoryRequirements;
};

struct SparseImageMemoryRequirements2 {
  StructureType sType;
  void *pNext;
  SparseImageMemoryRequirements memoryRequirements;
};

struct PhysicalDevicePointClippingProperties {
  StructureType sType;
  void *pNext;
  PointClippingBehavior pointClippingBehavior;
};

struct MemoryDedicatedRequirements {
  StructureType sType;
  void *pNext;
  VkBool32 prefersDedicatedAllocation;
  VkBool32 requiresDedicatedAllocation;
};

struct MemoryDedicatedAllocateInfo {
  StructureType sType;
  void *pNext;
  VkImage image;
  VkBuffer buffer;
};

struct ImageViewUsageCreateInfo {
  StructureType sType;
  void *pNext;
  ImageUsageMask usage;
};

struct ImageViewSlicedCreateInfoEXT {
  StructureType sType;
  void *pNext;
  uint32_t sliceOffset;
  uint32_t sliceCount;
};

struct PipelineTessellationDomainOriginStateCreateInfo {
  StructureType sType;
  void *pNext;
  TessellationDomainOrigin domainOrigin;
};

struct SamplerYcbcrConversionInfo {
  StructureType sType;
  void *pNext;
  VkSamplerYcbcrConversion conversion;
};

struct SamplerYcbcrConversionCreateInfo {
  StructureType sType;
  void *pNext;
  Format format;
  SamplerYcbcrModelConversion ycbcrModel;
  SamplerYcbcrRange ycbcrRange;
  ComponentMapping components;
  ChromaLocation xChromaOffset;
  ChromaLocation yChromaOffset;
  Filter chromaFilter;
  VkBool32 forceExplicitReconstruction;
};

struct BindImagePlaneMemoryInfo {
  StructureType sType;
  void *pNext;
  ImageAspectMaskBits planeAspect;
};

struct ImagePlaneMemoryRequirementsInfo {
  StructureType sType;
  void *pNext;
  ImageAspectMaskBits planeAspect;
};

struct PhysicalDeviceSamplerYcbcrConversionFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 samplerYcbcrConversion;
};

struct SamplerYcbcrConversionImageFormatProperties {
  StructureType sType;
  void *pNext;
  uint32_t combinedImageSamplerDescriptorCount;
};

struct TextureLODGatherFormatPropertiesAMD {
  StructureType sType;
  void *pNext;
  VkBool32 supportsTextureGatherLODBiasAMD;
};

struct ConditionalRenderingBeginInfoEXT {
  StructureType sType;
  void *pNext;
  VkBuffer buffer;
  VkDeviceSize offset;
  ConditionalRenderingMask flags;
};

struct ProtectedSubmitInfo {
  StructureType sType;
  void *pNext;
  VkBool32 protectedSubmit;
};

struct PhysicalDeviceProtectedMemoryFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 protectedMemory;
};

struct PhysicalDeviceProtectedMemoryProperties {
  StructureType sType;
  void *pNext;
  VkBool32 protectedNoFault;
};

struct DeviceQueueInfo2 {
  StructureType sType;
  void *pNext;
  DeviceQueueCreateMask flags;
  uint32_t queueFamilyIndex;
  uint32_t queueIndex;
};

struct PipelineCoverageToColorStateCreateInfoNV {
  StructureType sType;
  void *pNext;
  PipelineCoverageToColorStateCreateMask flags;
  VkBool32 coverageToColorEnable;
  uint32_t coverageToColorLocation;
};

struct PhysicalDeviceSamplerFilterMinmaxProperties {
  StructureType sType;
  void *pNext;
  VkBool32 filterMinmaxSingleComponentFormats;
  VkBool32 filterMinmaxImageComponentMapping;
};

struct SampleLocationEXT {
  float x;
  float y;
};

struct SampleLocationsInfoEXT {
  StructureType sType;
  void *pNext;
  SampleCountMaskBits sampleLocationsPerPixel;
  Extent2D sampleLocationGridSize;
  uint32_t sampleLocationsCount;
  SampleLocationEXT *pSampleLocations;
};

struct AttachmentSampleLocationsEXT {
  uint32_t attachmentIndex;
  SampleLocationsInfoEXT sampleLocationsInfo;
};

struct SubpassSampleLocationsEXT {
  uint32_t subpassIndex;
  SampleLocationsInfoEXT sampleLocationsInfo;
};

struct RenderPassSampleLocationsBeginInfoEXT {
  StructureType sType;
  void *pNext;
  uint32_t attachmentInitialSampleLocationsCount;
  AttachmentSampleLocationsEXT *pAttachmentInitialSampleLocations;
  uint32_t postSubpassSampleLocationsCount;
  SubpassSampleLocationsEXT *pPostSubpassSampleLocations;
};

struct PipelineSampleLocationsStateCreateInfoEXT {
  StructureType sType;
  void *pNext;
  VkBool32 sampleLocationsEnable;
  SampleLocationsInfoEXT sampleLocationsInfo;
};

struct PhysicalDeviceSampleLocationsPropertiesEXT {
  StructureType sType;
  void *pNext;
  SampleCountMask sampleLocationSampleCounts;
  Extent2D maxSampleLocationGridSize;
  float sampleLocationCoordinateRange[2];
  uint32_t sampleLocationSubPixelBits;
  VkBool32 variableSampleLocations;
};

struct MultisamplePropertiesEXT {
  StructureType sType;
  void *pNext;
  Extent2D maxSampleLocationGridSize;
};

struct SamplerReductionModeCreateInfo {
  StructureType sType;
  void *pNext;
  SamplerReductionMode reductionMode;
};

struct PhysicalDeviceBlendOperationAdvancedFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 advancedBlendCoherentOperations;
};

struct PhysicalDeviceMultiDrawFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 multiDraw;
};

struct PhysicalDeviceBlendOperationAdvancedPropertiesEXT {
  StructureType sType;
  void *pNext;
  uint32_t advancedBlendMaxColorAttachments;
  VkBool32 advancedBlendIndependentBlend;
  VkBool32 advancedBlendNonPremultipliedSrcColor;
  VkBool32 advancedBlendNonPremultipliedDstColor;
  VkBool32 advancedBlendCorrelatedOverlap;
  VkBool32 advancedBlendAllOperations;
};

struct PipelineColorBlendAdvancedStateCreateInfoEXT {
  StructureType sType;
  void *pNext;
  VkBool32 srcPremultiplied;
  VkBool32 dstPremultiplied;
  BlendOverlap blendOverlap;
};

struct PhysicalDeviceInlineUniformBlockFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 inlineUniformBlock;
  VkBool32 descriptorBindingInlineUniformBlockUpdateAfterBind;
};

struct PhysicalDeviceInlineUniformBlockProperties {
  StructureType sType;
  void *pNext;
  uint32_t maxInlineUniformBlockSize;
  uint32_t maxPerStageDescriptorInlineUniformBlocks;
  uint32_t maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
  uint32_t maxDescriptorSetInlineUniformBlocks;
  uint32_t maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
};

struct WriteDescriptorSetInlineUniformBlock {
  StructureType sType;
  void *pNext;
  uint32_t dataSize;
  void *pData;
};

struct DescriptorPoolInlineUniformBlockCreateInfo {
  StructureType sType;
  void *pNext;
  uint32_t maxInlineUniformBlockBindings;
};

struct PipelineCoverageModulationStateCreateInfoNV {
  StructureType sType;
  void *pNext;
  PipelineCoverageModulationStateCreateMask flags;
  CoverageModulationMode coverageModulationMode;
  VkBool32 coverageModulationTableEnable;
  uint32_t coverageModulationTableCount;
  float *pCoverageModulationTable;
};

struct ImageFormatListCreateInfo {
  StructureType sType;
  void *pNext;
  uint32_t viewFormatCount;
  Format *pViewFormats;
};

struct ValidationCacheCreateInfoEXT {
  StructureType sType;
  void *pNext;
  ValidationCacheCreateMask flags;
  size_t initialDataSize;
  void *pInitialData;
};

struct ShaderModuleValidationCacheCreateInfoEXT {
  StructureType sType;
  void *pNext;
  VkValidationCacheEXT validationCache;
};

struct PhysicalDeviceMaintenance3Properties {
  StructureType sType;
  void *pNext;
  uint32_t maxPerSetDescriptors;
  VkDeviceSize maxMemoryAllocationSize;
};

struct PhysicalDeviceMaintenance4Features {
  StructureType sType;
  void *pNext;
  VkBool32 maintenance4;
};

struct PhysicalDeviceMaintenance4Properties {
  StructureType sType;
  void *pNext;
  VkDeviceSize maxBufferSize;
};

struct PhysicalDeviceMaintenance5FeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 maintenance5;
};

struct PhysicalDeviceMaintenance5PropertiesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 earlyFragmentMultisampleCoverageAfterSampleCounting;
  VkBool32 earlyFragmentSampleMaskTestBeforeSampleCounting;
  VkBool32 depthStencilSwizzleOneSupport;
  VkBool32 polygonModePointSize;
  VkBool32 nonStrictSinglePixelWideLinesUseParallelogram;
  VkBool32 nonStrictWideLinesUseParallelogram;
};

struct PhysicalDeviceMaintenance6FeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 maintenance6;
};

struct PhysicalDeviceMaintenance6PropertiesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 blockTexelViewCompatibleMultipleLayers;
  uint32_t maxCombinedImageSamplerDescriptorCount;
  VkBool32 fragmentShadingRateClampCombinerInputs;
};

struct PhysicalDeviceMaintenance7FeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 maintenance7;
};

struct PhysicalDeviceMaintenance7PropertiesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 robustFragmentShadingRateAttachmentAccess;
  VkBool32 separateDepthStencilAttachmentAccess;
  uint32_t maxDescriptorSetTotalUniformBuffersDynamic;
  uint32_t maxDescriptorSetTotalStorageBuffersDynamic;
  uint32_t maxDescriptorSetTotalBuffersDynamic;
  uint32_t maxDescriptorSetUpdateAfterBindTotalUniformBuffersDynamic;
  uint32_t maxDescriptorSetUpdateAfterBindTotalStorageBuffersDynamic;
  uint32_t maxDescriptorSetUpdateAfterBindTotalBuffersDynamic;
};

struct PhysicalDeviceLayeredApiPropertiesKHR {
  StructureType sType;
  void *pNext;
  uint32_t vendorID;
  uint32_t deviceID;
  PhysicalDeviceLayeredApi layeredAPI;
  char deviceName[VK_MAX_PHYSICAL_DEVICE_NAME_SIZE];
};

struct PhysicalDeviceLayeredApiPropertiesListKHR {
  StructureType sType;
  void *pNext;
  uint32_t layeredApiCount;
  PhysicalDeviceLayeredApiPropertiesKHR *pLayeredApis;
};

struct PhysicalDeviceLayeredApiVulkanPropertiesKHR {
  StructureType sType;
  void *pNext;
  PhysicalDeviceProperties2 properties;
};

struct RenderingAreaInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t viewMask;
  uint32_t colorAttachmentCount;
  Format *pColorAttachmentFormats;
  Format depthAttachmentFormat;
  Format stencilAttachmentFormat;
};

struct DescriptorSetLayoutSupport {
  StructureType sType;
  void *pNext;
  VkBool32 supported;
};

struct PhysicalDeviceShaderDrawParametersFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 shaderDrawParameters;
};

struct PhysicalDeviceShaderFloat16Int8Features {
  StructureType sType;
  void *pNext;
  VkBool32 shaderFloat16;
  VkBool32 shaderInt8;
};

struct PhysicalDeviceFloatControlsProperties {
  StructureType sType;
  void *pNext;
  ShaderFloatControlsIndependence denormBehaviorIndependence;
  ShaderFloatControlsIndependence roundingModeIndependence;
  VkBool32 shaderSignedZeroInfNanPreserveFloat16;
  VkBool32 shaderSignedZeroInfNanPreserveFloat32;
  VkBool32 shaderSignedZeroInfNanPreserveFloat64;
  VkBool32 shaderDenormPreserveFloat16;
  VkBool32 shaderDenormPreserveFloat32;
  VkBool32 shaderDenormPreserveFloat64;
  VkBool32 shaderDenormFlushToZeroFloat16;
  VkBool32 shaderDenormFlushToZeroFloat32;
  VkBool32 shaderDenormFlushToZeroFloat64;
  VkBool32 shaderRoundingModeRTEFloat16;
  VkBool32 shaderRoundingModeRTEFloat32;
  VkBool32 shaderRoundingModeRTEFloat64;
  VkBool32 shaderRoundingModeRTZFloat16;
  VkBool32 shaderRoundingModeRTZFloat32;
  VkBool32 shaderRoundingModeRTZFloat64;
};

struct PhysicalDeviceHostQueryResetFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 hostQueryReset;
};

struct ShaderResourceUsageAMD {
  uint32_t numUsedVgprs;
  uint32_t numUsedSgprs;
  uint32_t ldsSizePerLocalWorkGroup;
  size_t ldsUsageSizeInBytes;
  size_t scratchMemUsageInBytes;
};

struct ShaderStatisticsInfoAMD {
  ShaderStageMask shaderStageMask;
  ShaderResourceUsageAMD resourceUsage;
  uint32_t numPhysicalVgprs;
  uint32_t numPhysicalSgprs;
  uint32_t numAvailableVgprs;
  uint32_t numAvailableSgprs;
  uint32_t computeWorkGroupSize[3];
};

struct DeviceQueueGlobalPriorityCreateInfoKHR {
  StructureType sType;
  void *pNext;
  QueueGlobalPriority globalPriority;
};

struct PhysicalDeviceGlobalPriorityQueryFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 globalPriorityQuery;
};

struct QueueFamilyGlobalPriorityPropertiesKHR {
  StructureType sType;
  void *pNext;
  uint32_t priorityCount;
  QueueGlobalPriority priorities[VK_MAX_GLOBAL_PRIORITY_SIZE_KHR];
};

struct DebugUtilsObjectNameInfoEXT {
  StructureType sType;
  void *pNext;
  ObjectType objectType;
  uint64_t objectHandle;
  char *pObjectName;
};

struct DebugUtilsObjectTagInfoEXT {
  StructureType sType;
  void *pNext;
  ObjectType objectType;
  uint64_t objectHandle;
  uint64_t tagName;
  size_t tagSize;
  void *pTag;
};

struct DebugUtilsLabelEXT {
  StructureType sType;
  void *pNext;
  char *pLabelName;
  float color[4];
};

struct DebugUtilsMessengerCreateInfoEXT {
  StructureType sType;
  void *pNext;
  DebugUtilsMessengerCreateMask flags;
  DebugUtilsMessageSeverityMask messageSeverity;
  DebugUtilsMessageTypeMask messageType;
  PFN_vkDebugUtilsMessengerCallbackEXT pfnUserCallback;
  void *pUserData;
};

struct DebugUtilsMessengerCallbackDataEXT {
  StructureType sType;
  void *pNext;
  DebugUtilsMessengerCallbackDataMask flags;
  char *pMessageIdName;
  int32_t messageIdNumber;
  char *pMessage;
  uint32_t queueLabelCount;
  DebugUtilsLabelEXT *pQueueLabels;
  uint32_t cmdBufLabelCount;
  DebugUtilsLabelEXT *pCmdBufLabels;
  uint32_t objectCount;
  DebugUtilsObjectNameInfoEXT *pObjects;
};

struct PhysicalDeviceDeviceMemoryReportFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 deviceMemoryReport;
};

struct DeviceDeviceMemoryReportCreateInfoEXT {
  StructureType sType;
  void *pNext;
  DeviceMemoryReportMask flags;
  PFN_vkDeviceMemoryReportCallbackEXT pfnUserCallback;
  void *pUserData;
};

struct DeviceMemoryReportCallbackDataEXT {
  StructureType sType;
  void *pNext;
  DeviceMemoryReportMask flags;
  DeviceMemoryReportEventType type;
  uint64_t memoryObjectId;
  VkDeviceSize size;
  ObjectType objectType;
  uint64_t objectHandle;
  uint32_t heapIndex;
};

struct ImportMemoryHostPointerInfoEXT {
  StructureType sType;
  void *pNext;
  ExternalMemoryHandleTypeMaskBits handleType;
  void *pHostPointer;
};

struct MemoryHostPointerPropertiesEXT {
  StructureType sType;
  void *pNext;
  uint32_t memoryTypeBits;
};

struct PhysicalDeviceExternalMemoryHostPropertiesEXT {
  StructureType sType;
  void *pNext;
  VkDeviceSize minImportedHostPointerAlignment;
};

struct PhysicalDeviceConservativeRasterizationPropertiesEXT {
  StructureType sType;
  void *pNext;
  float primitiveOverestimationSize;
  float maxExtraPrimitiveOverestimationSize;
  float extraPrimitiveOverestimationSizeGranularity;
  VkBool32 primitiveUnderestimation;
  VkBool32 conservativePointAndLineRasterization;
  VkBool32 degenerateTrianglesRasterized;
  VkBool32 degenerateLinesRasterized;
  VkBool32 fullyCoveredFragmentShaderInputVariable;
  VkBool32 conservativeRasterizationPostDepthCoverage;
};

struct CalibratedTimestampInfoKHR {
  StructureType sType;
  void *pNext;
  TimeDomain timeDomain;
};

struct PhysicalDeviceShaderCorePropertiesAMD {
  StructureType sType;
  void *pNext;
  uint32_t shaderEngineCount;
  uint32_t shaderArraysPerEngineCount;
  uint32_t computeUnitsPerShaderArray;
  uint32_t simdPerComputeUnit;
  uint32_t wavefrontsPerSimd;
  uint32_t wavefrontSize;
  uint32_t sgprsPerSimd;
  uint32_t minSgprAllocation;
  uint32_t maxSgprAllocation;
  uint32_t sgprAllocationGranularity;
  uint32_t vgprsPerSimd;
  uint32_t minVgprAllocation;
  uint32_t maxVgprAllocation;
  uint32_t vgprAllocationGranularity;
};

struct PhysicalDeviceShaderCoreProperties2AMD {
  StructureType sType;
  void *pNext;
  ShaderCorePropertiesMask shaderCoreFeatures;
  uint32_t activeComputeUnitCount;
};

struct PipelineRasterizationConservativeStateCreateInfoEXT {
  StructureType sType;
  void *pNext;
  PipelineRasterizationConservativeStateCreateMask flags;
  ConservativeRasterizationMode conservativeRasterizationMode;
  float extraPrimitiveOverestimationSize;
};

struct PhysicalDeviceDescriptorIndexingFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 shaderInputAttachmentArrayDynamicIndexing;
  VkBool32 shaderUniformTexelBufferArrayDynamicIndexing;
  VkBool32 shaderStorageTexelBufferArrayDynamicIndexing;
  VkBool32 shaderUniformBufferArrayNonUniformIndexing;
  VkBool32 shaderSampledImageArrayNonUniformIndexing;
  VkBool32 shaderStorageBufferArrayNonUniformIndexing;
  VkBool32 shaderStorageImageArrayNonUniformIndexing;
  VkBool32 shaderInputAttachmentArrayNonUniformIndexing;
  VkBool32 shaderUniformTexelBufferArrayNonUniformIndexing;
  VkBool32 shaderStorageTexelBufferArrayNonUniformIndexing;
  VkBool32 descriptorBindingUniformBufferUpdateAfterBind;
  VkBool32 descriptorBindingSampledImageUpdateAfterBind;
  VkBool32 descriptorBindingStorageImageUpdateAfterBind;
  VkBool32 descriptorBindingStorageBufferUpdateAfterBind;
  VkBool32 descriptorBindingUniformTexelBufferUpdateAfterBind;
  VkBool32 descriptorBindingStorageTexelBufferUpdateAfterBind;
  VkBool32 descriptorBindingUpdateUnusedWhilePending;
  VkBool32 descriptorBindingPartiallyBound;
  VkBool32 descriptorBindingVariableDescriptorCount;
  VkBool32 runtimeDescriptorArray;
};

struct PhysicalDeviceDescriptorIndexingProperties {
  StructureType sType;
  void *pNext;
  uint32_t maxUpdateAfterBindDescriptorsInAllPools;
  VkBool32 shaderUniformBufferArrayNonUniformIndexingNative;
  VkBool32 shaderSampledImageArrayNonUniformIndexingNative;
  VkBool32 shaderStorageBufferArrayNonUniformIndexingNative;
  VkBool32 shaderStorageImageArrayNonUniformIndexingNative;
  VkBool32 shaderInputAttachmentArrayNonUniformIndexingNative;
  VkBool32 robustBufferAccessUpdateAfterBind;
  VkBool32 quadDivergentImplicitLod;
  uint32_t maxPerStageDescriptorUpdateAfterBindSamplers;
  uint32_t maxPerStageDescriptorUpdateAfterBindUniformBuffers;
  uint32_t maxPerStageDescriptorUpdateAfterBindStorageBuffers;
  uint32_t maxPerStageDescriptorUpdateAfterBindSampledImages;
  uint32_t maxPerStageDescriptorUpdateAfterBindStorageImages;
  uint32_t maxPerStageDescriptorUpdateAfterBindInputAttachments;
  uint32_t maxPerStageUpdateAfterBindResources;
  uint32_t maxDescriptorSetUpdateAfterBindSamplers;
  uint32_t maxDescriptorSetUpdateAfterBindUniformBuffers;
  uint32_t maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
  uint32_t maxDescriptorSetUpdateAfterBindStorageBuffers;
  uint32_t maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
  uint32_t maxDescriptorSetUpdateAfterBindSampledImages;
  uint32_t maxDescriptorSetUpdateAfterBindStorageImages;
  uint32_t maxDescriptorSetUpdateAfterBindInputAttachments;
};

struct DescriptorSetLayoutBindingFlagsCreateInfo {
  StructureType sType;
  void *pNext;
  uint32_t bindingCount;
  DescriptorBindingMask *pBindingFlags;
};

struct DescriptorSetVariableDescriptorCountAllocateInfo {
  StructureType sType;
  void *pNext;
  uint32_t descriptorSetCount;
  uint32_t *pDescriptorCounts;
};

struct DescriptorSetVariableDescriptorCountLayoutSupport {
  StructureType sType;
  void *pNext;
  uint32_t maxVariableDescriptorCount;
};

struct AttachmentDescription2 {
  StructureType sType;
  void *pNext;
  AttachmentDescriptionMask flags;
  Format format;
  SampleCountMaskBits samples;
  AttachmentLoadOp loadOp;
  AttachmentStoreOp storeOp;
  AttachmentLoadOp stencilLoadOp;
  AttachmentStoreOp stencilStoreOp;
  ImageLayout initialLayout;
  ImageLayout finalLayout;
};

struct AttachmentReference2 {
  StructureType sType;
  void *pNext;
  uint32_t attachment;
  ImageLayout layout;
  ImageAspectMask aspectMask;
};

struct SubpassDescription2 {
  StructureType sType;
  void *pNext;
  SubpassDescriptionMask flags;
  PipelineBindPoint pipelineBindPoint;
  uint32_t viewMask;
  uint32_t inputAttachmentCount;
  AttachmentReference2 *pInputAttachments;
  uint32_t colorAttachmentCount;
  AttachmentReference2 *pColorAttachments;
  AttachmentReference2 *pResolveAttachments;
  AttachmentReference2 *pDepthStencilAttachment;
  uint32_t preserveAttachmentCount;
  uint32_t *pPreserveAttachments;
};

struct SubpassDependency2 {
  StructureType sType;
  void *pNext;
  uint32_t srcSubpass;
  uint32_t dstSubpass;
  PipelineStageMask srcStageMask;
  PipelineStageMask dstStageMask;
  AccessMask srcAccessMask;
  AccessMask dstAccessMask;
  DependencyMask dependencyFlags;
  int32_t viewOffset;
};

struct RenderPassCreateInfo2 {
  StructureType sType;
  void *pNext;
  RenderPassCreateMask flags;
  uint32_t attachmentCount;
  AttachmentDescription2 *pAttachments;
  uint32_t subpassCount;
  SubpassDescription2 *pSubpasses;
  uint32_t dependencyCount;
  SubpassDependency2 *pDependencies;
  uint32_t correlatedViewMaskCount;
  uint32_t *pCorrelatedViewMasks;
};

struct SubpassBeginInfo {
  StructureType sType;
  void *pNext;
  SubpassContents contents;
};

struct SubpassEndInfo {
  StructureType sType;
  void *pNext;
};

struct PhysicalDeviceTimelineSemaphoreFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 timelineSemaphore;
};

struct PhysicalDeviceTimelineSemaphoreProperties {
  StructureType sType;
  void *pNext;
  uint64_t maxTimelineSemaphoreValueDifference;
};

struct SemaphoreTypeCreateInfo {
  StructureType sType;
  void *pNext;
  SemaphoreType semaphoreType;
  uint64_t initialValue;
};

struct TimelineSemaphoreSubmitInfo {
  StructureType sType;
  void *pNext;
  uint32_t waitSemaphoreValueCount;
  uint64_t *pWaitSemaphoreValues;
  uint32_t signalSemaphoreValueCount;
  uint64_t *pSignalSemaphoreValues;
};

struct SemaphoreWaitInfo {
  StructureType sType;
  void *pNext;
  SemaphoreWaitMask flags;
  uint32_t semaphoreCount;
  VkSemaphore *pSemaphores;
  uint64_t *pValues;
};

struct SemaphoreSignalInfo {
  StructureType sType;
  void *pNext;
  VkSemaphore semaphore;
  uint64_t value;
};

struct VertexInputBindingDivisorDescriptionKHR {
  uint32_t binding;
  uint32_t divisor;
};

struct PipelineVertexInputDivisorStateCreateInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t vertexBindingDivisorCount;
  VertexInputBindingDivisorDescriptionKHR *pVertexBindingDivisors;
};

struct PhysicalDeviceVertexAttributeDivisorPropertiesEXT {
  StructureType sType;
  void *pNext;
  uint32_t maxVertexAttribDivisor;
};

struct PhysicalDeviceVertexAttributeDivisorPropertiesKHR {
  StructureType sType;
  void *pNext;
  uint32_t maxVertexAttribDivisor;
  VkBool32 supportsNonZeroFirstInstance;
};

struct PhysicalDevicePCIBusInfoPropertiesEXT {
  StructureType sType;
  void *pNext;
  uint32_t pciDomain;
  uint32_t pciBus;
  uint32_t pciDevice;
  uint32_t pciFunction;
};

struct CommandBufferInheritanceConditionalRenderingInfoEXT {
  StructureType sType;
  void *pNext;
  VkBool32 conditionalRenderingEnable;
};

struct PhysicalDevice8BitStorageFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 storageBuffer8BitAccess;
  VkBool32 uniformAndStorageBuffer8BitAccess;
  VkBool32 storagePushConstant8;
};

struct PhysicalDeviceConditionalRenderingFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 conditionalRendering;
  VkBool32 inheritedConditionalRendering;
};

struct PhysicalDeviceVulkanMemoryModelFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 vulkanMemoryModel;
  VkBool32 vulkanMemoryModelDeviceScope;
  VkBool32 vulkanMemoryModelAvailabilityVisibilityChains;
};

struct PhysicalDeviceShaderAtomicInt64Features {
  StructureType sType;
  void *pNext;
  VkBool32 shaderBufferInt64Atomics;
  VkBool32 shaderSharedInt64Atomics;
};

struct PhysicalDeviceShaderAtomicFloatFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 shaderBufferFloat32Atomics;
  VkBool32 shaderBufferFloat32AtomicAdd;
  VkBool32 shaderBufferFloat64Atomics;
  VkBool32 shaderBufferFloat64AtomicAdd;
  VkBool32 shaderSharedFloat32Atomics;
  VkBool32 shaderSharedFloat32AtomicAdd;
  VkBool32 shaderSharedFloat64Atomics;
  VkBool32 shaderSharedFloat64AtomicAdd;
  VkBool32 shaderImageFloat32Atomics;
  VkBool32 shaderImageFloat32AtomicAdd;
  VkBool32 sparseImageFloat32Atomics;
  VkBool32 sparseImageFloat32AtomicAdd;
};

struct PhysicalDeviceShaderAtomicFloat2FeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 shaderBufferFloat16Atomics;
  VkBool32 shaderBufferFloat16AtomicAdd;
  VkBool32 shaderBufferFloat16AtomicMinMax;
  VkBool32 shaderBufferFloat32AtomicMinMax;
  VkBool32 shaderBufferFloat64AtomicMinMax;
  VkBool32 shaderSharedFloat16Atomics;
  VkBool32 shaderSharedFloat16AtomicAdd;
  VkBool32 shaderSharedFloat16AtomicMinMax;
  VkBool32 shaderSharedFloat32AtomicMinMax;
  VkBool32 shaderSharedFloat64AtomicMinMax;
  VkBool32 shaderImageFloat32AtomicMinMax;
  VkBool32 sparseImageFloat32AtomicMinMax;
};

struct PhysicalDeviceVertexAttributeDivisorFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 vertexAttributeInstanceRateDivisor;
  VkBool32 vertexAttributeInstanceRateZeroDivisor;
};

struct QueueFamilyCheckpointPropertiesNV {
  StructureType sType;
  void *pNext;
  PipelineStageMask checkpointExecutionStageMask;
};

struct CheckpointDataNV {
  StructureType sType;
  void *pNext;
  PipelineStageMaskBits stage;
  void *pCheckpointMarker;
};

struct PhysicalDeviceDepthStencilResolveProperties {
  StructureType sType;
  void *pNext;
  ResolveModeMask supportedDepthResolveModes;
  ResolveModeMask supportedStencilResolveModes;
  VkBool32 independentResolveNone;
  VkBool32 independentResolve;
};

struct SubpassDescriptionDepthStencilResolve {
  StructureType sType;
  void *pNext;
  ResolveModeMaskBits depthResolveMode;
  ResolveModeMaskBits stencilResolveMode;
  AttachmentReference2 *pDepthStencilResolveAttachment;
};

struct ImageViewASTCDecodeModeEXT {
  StructureType sType;
  void *pNext;
  Format decodeMode;
};

struct PhysicalDeviceASTCDecodeFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 decodeModeSharedExponent;
};

struct PhysicalDeviceTransformFeedbackFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 transformFeedback;
  VkBool32 geometryStreams;
};

struct PhysicalDeviceTransformFeedbackPropertiesEXT {
  StructureType sType;
  void *pNext;
  uint32_t maxTransformFeedbackStreams;
  uint32_t maxTransformFeedbackBuffers;
  VkDeviceSize maxTransformFeedbackBufferSize;
  uint32_t maxTransformFeedbackStreamDataSize;
  uint32_t maxTransformFeedbackBufferDataSize;
  uint32_t maxTransformFeedbackBufferDataStride;
  VkBool32 transformFeedbackQueries;
  VkBool32 transformFeedbackStreamsLinesTriangles;
  VkBool32 transformFeedbackRasterizationStreamSelect;
  VkBool32 transformFeedbackDraw;
};

struct PipelineRasterizationStateStreamCreateInfoEXT {
  StructureType sType;
  void *pNext;
  PipelineRasterizationStateStreamCreateMask flags;
  uint32_t rasterizationStream;
};

struct PhysicalDeviceRepresentativeFragmentTestFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 representativeFragmentTest;
};

struct PipelineRepresentativeFragmentTestStateCreateInfoNV {
  StructureType sType;
  void *pNext;
  VkBool32 representativeFragmentTestEnable;
};

struct PhysicalDeviceExclusiveScissorFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 exclusiveScissor;
};

struct PipelineViewportExclusiveScissorStateCreateInfoNV {
  StructureType sType;
  void *pNext;
  uint32_t exclusiveScissorCount;
  Rect2D *pExclusiveScissors;
};

struct PhysicalDeviceCornerSampledImageFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 cornerSampledImage;
};

struct PhysicalDeviceComputeShaderDerivativesFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 computeDerivativeGroupQuads;
  VkBool32 computeDerivativeGroupLinear;
};

struct PhysicalDeviceShaderImageFootprintFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 imageFootprint;
};

struct PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 dedicatedAllocationImageAliasing;
};

struct PhysicalDeviceCopyMemoryIndirectFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 indirectCopy;
};

struct PhysicalDeviceCopyMemoryIndirectPropertiesNV {
  StructureType sType;
  void *pNext;
  QueueMask supportedQueues;
};

struct PhysicalDeviceMemoryDecompressionFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 memoryDecompression;
};

struct PhysicalDeviceMemoryDecompressionPropertiesNV {
  StructureType sType;
  void *pNext;
  MemoryDecompressionMethodMask decompressionMethods;
  uint64_t maxDecompressionIndirectCount;
};

struct ShadingRatePaletteNV {
  uint32_t shadingRatePaletteEntryCount;
  ShadingRatePaletteEntry *pShadingRatePaletteEntries;
};

struct PipelineViewportShadingRateImageStateCreateInfoNV {
  StructureType sType;
  void *pNext;
  VkBool32 shadingRateImageEnable;
  uint32_t viewportCount;
  ShadingRatePaletteNV *pShadingRatePalettes;
};

struct PhysicalDeviceShadingRateImageFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 shadingRateImage;
  VkBool32 shadingRateCoarseSampleOrder;
};

struct PhysicalDeviceShadingRateImagePropertiesNV {
  StructureType sType;
  void *pNext;
  Extent2D shadingRateTexelSize;
  uint32_t shadingRatePaletteSize;
  uint32_t shadingRateMaxCoarseSamples;
};

struct PhysicalDeviceInvocationMaskFeaturesHUAWEI {
  StructureType sType;
  void *pNext;
  VkBool32 invocationMask;
};

struct CoarseSampleLocationNV {
  uint32_t pixelX;
  uint32_t pixelY;
  uint32_t sample;
};

struct CoarseSampleOrderCustomNV {
  ShadingRatePaletteEntry shadingRate;
  uint32_t sampleCount;
  uint32_t sampleLocationCount;
  CoarseSampleLocationNV *pSampleLocations;
};

struct PipelineViewportCoarseSampleOrderStateCreateInfoNV {
  StructureType sType;
  void *pNext;
  CoarseSampleOrderType sampleOrderType;
  uint32_t customSampleOrderCount;
  CoarseSampleOrderCustomNV *pCustomSampleOrders;
};

struct PhysicalDeviceMeshShaderFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 taskShader;
  VkBool32 meshShader;
};

struct PhysicalDeviceMeshShaderPropertiesNV {
  StructureType sType;
  void *pNext;
  uint32_t maxDrawMeshTasksCount;
  uint32_t maxTaskWorkGroupInvocations;
  uint32_t maxTaskWorkGroupSize[3];
  uint32_t maxTaskTotalMemorySize;
  uint32_t maxTaskOutputCount;
  uint32_t maxMeshWorkGroupInvocations;
  uint32_t maxMeshWorkGroupSize[3];
  uint32_t maxMeshTotalMemorySize;
  uint32_t maxMeshOutputVertices;
  uint32_t maxMeshOutputPrimitives;
  uint32_t maxMeshMultiviewViewCount;
  uint32_t meshOutputPerVertexGranularity;
  uint32_t meshOutputPerPrimitiveGranularity;
};

struct DrawMeshTasksIndirectCommandNV {
  uint32_t taskCount;
  uint32_t firstTask;
};

struct PhysicalDeviceMeshShaderFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 taskShader;
  VkBool32 meshShader;
  VkBool32 multiviewMeshShader;
  VkBool32 primitiveFragmentShadingRateMeshShader;
  VkBool32 meshShaderQueries;
};

struct PhysicalDeviceMeshShaderPropertiesEXT {
  StructureType sType;
  void *pNext;
  uint32_t maxTaskWorkGroupTotalCount;
  uint32_t maxTaskWorkGroupCount[3];
  uint32_t maxTaskWorkGroupInvocations;
  uint32_t maxTaskWorkGroupSize[3];
  uint32_t maxTaskPayloadSize;
  uint32_t maxTaskSharedMemorySize;
  uint32_t maxTaskPayloadAndSharedMemorySize;
  uint32_t maxMeshWorkGroupTotalCount;
  uint32_t maxMeshWorkGroupCount[3];
  uint32_t maxMeshWorkGroupInvocations;
  uint32_t maxMeshWorkGroupSize[3];
  uint32_t maxMeshSharedMemorySize;
  uint32_t maxMeshPayloadAndSharedMemorySize;
  uint32_t maxMeshOutputMemorySize;
  uint32_t maxMeshPayloadAndOutputMemorySize;
  uint32_t maxMeshOutputComponents;
  uint32_t maxMeshOutputVertices;
  uint32_t maxMeshOutputPrimitives;
  uint32_t maxMeshOutputLayers;
  uint32_t maxMeshMultiviewViewCount;
  uint32_t meshOutputPerVertexGranularity;
  uint32_t meshOutputPerPrimitiveGranularity;
  uint32_t maxPreferredTaskWorkGroupInvocations;
  uint32_t maxPreferredMeshWorkGroupInvocations;
  VkBool32 prefersLocalInvocationVertexOutput;
  VkBool32 prefersLocalInvocationPrimitiveOutput;
  VkBool32 prefersCompactVertexOutput;
  VkBool32 prefersCompactPrimitiveOutput;
};

struct DrawMeshTasksIndirectCommandEXT {
  uint32_t groupCountX;
  uint32_t groupCountY;
  uint32_t groupCountZ;
};

struct RayTracingShaderGroupCreateInfoNV {
  StructureType sType;
  void *pNext;
  RayTracingShaderGroupType type;
  uint32_t generalShader;
  uint32_t closestHitShader;
  uint32_t anyHitShader;
  uint32_t intersectionShader;
};

struct RayTracingShaderGroupCreateInfoKHR {
  StructureType sType;
  void *pNext;
  RayTracingShaderGroupType type;
  uint32_t generalShader;
  uint32_t closestHitShader;
  uint32_t anyHitShader;
  uint32_t intersectionShader;
  void *pShaderGroupCaptureReplayHandle;
};

struct RayTracingPipelineCreateInfoNV {
  StructureType sType;
  void *pNext;
  PipelineCreateMask flags;
  uint32_t stageCount;
  PipelineShaderStageCreateInfo *pStages;
  uint32_t groupCount;
  RayTracingShaderGroupCreateInfoNV *pGroups;
  uint32_t maxRecursionDepth;
  VkPipelineLayout layout;
  VkPipeline basePipelineHandle;
  int32_t basePipelineIndex;
};

struct PipelineLibraryCreateInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t libraryCount;
  VkPipeline *pLibraries;
};

struct RayTracingPipelineInterfaceCreateInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t maxPipelineRayPayloadSize;
  uint32_t maxPipelineRayHitAttributeSize;
};

struct RayTracingPipelineCreateInfoKHR {
  StructureType sType;
  void *pNext;
  PipelineCreateMask flags;
  uint32_t stageCount;
  PipelineShaderStageCreateInfo *pStages;
  uint32_t groupCount;
  RayTracingShaderGroupCreateInfoKHR *pGroups;
  uint32_t maxPipelineRayRecursionDepth;
  PipelineLibraryCreateInfoKHR *pLibraryInfo;
  RayTracingPipelineInterfaceCreateInfoKHR *pLibraryInterface;
  PipelineDynamicStateCreateInfo *pDynamicState;
  VkPipelineLayout layout;
  VkPipeline basePipelineHandle;
  int32_t basePipelineIndex;
};

struct GeometryTrianglesNV {
  StructureType sType;
  void *pNext;
  VkBuffer vertexData;
  VkDeviceSize vertexOffset;
  uint32_t vertexCount;
  VkDeviceSize vertexStride;
  Format vertexFormat;
  VkBuffer indexData;
  VkDeviceSize indexOffset;
  uint32_t indexCount;
  IndexType indexType;
  VkBuffer transformData;
  VkDeviceSize transformOffset;
};

struct GeometryAABBNV {
  StructureType sType;
  void *pNext;
  VkBuffer aabbData;
  uint32_t numAABBs;
  uint32_t stride;
  VkDeviceSize offset;
};

struct GeometryDataNV {
  GeometryTrianglesNV triangles;
  GeometryAABBNV aabbs;
};

struct GeometryNV {
  StructureType sType;
  void *pNext;
  GeometryType geometryType;
  GeometryDataNV geometry;
  GeometryMask flags;
};

struct AccelerationStructureInfoNV {
  StructureType sType;
  void *pNext;
  VkAccelerationStructureTypeNV type;
  VkBuildAccelerationStructureFlagsNV flags;
  uint32_t instanceCount;
  uint32_t geometryCount;
  GeometryNV *pGeometries;
};

struct AccelerationStructureCreateInfoNV {
  StructureType sType;
  void *pNext;
  VkDeviceSize compactedSize;
  AccelerationStructureInfoNV info;
};

struct BindAccelerationStructureMemoryInfoNV {
  StructureType sType;
  void *pNext;
  VkAccelerationStructureNV accelerationStructure;
  VkDeviceMemory memory;
  VkDeviceSize memoryOffset;
  uint32_t deviceIndexCount;
  uint32_t *pDeviceIndices;
};

struct WriteDescriptorSetAccelerationStructureKHR {
  StructureType sType;
  void *pNext;
  uint32_t accelerationStructureCount;
  VkAccelerationStructureKHR *pAccelerationStructures;
};

struct WriteDescriptorSetAccelerationStructureNV {
  StructureType sType;
  void *pNext;
  uint32_t accelerationStructureCount;
  VkAccelerationStructureNV *pAccelerationStructures;
};

struct AccelerationStructureMemoryRequirementsInfoNV {
  StructureType sType;
  void *pNext;
  AccelerationStructureMemoryRequirementsType type;
  VkAccelerationStructureNV accelerationStructure;
};

struct PhysicalDeviceAccelerationStructureFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 accelerationStructure;
  VkBool32 accelerationStructureCaptureReplay;
  VkBool32 accelerationStructureIndirectBuild;
  VkBool32 accelerationStructureHostCommands;
  VkBool32 descriptorBindingAccelerationStructureUpdateAfterBind;
};

struct PhysicalDeviceRayTracingPipelineFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 rayTracingPipeline;
  VkBool32 rayTracingPipelineShaderGroupHandleCaptureReplay;
  VkBool32 rayTracingPipelineShaderGroupHandleCaptureReplayMixed;
  VkBool32 rayTracingPipelineTraceRaysIndirect;
  VkBool32 rayTraversalPrimitiveCulling;
};

struct PhysicalDeviceRayQueryFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 rayQuery;
};

struct PhysicalDeviceAccelerationStructurePropertiesKHR {
  StructureType sType;
  void *pNext;
  uint64_t maxGeometryCount;
  uint64_t maxInstanceCount;
  uint64_t maxPrimitiveCount;
  uint32_t maxPerStageDescriptorAccelerationStructures;
  uint32_t maxPerStageDescriptorUpdateAfterBindAccelerationStructures;
  uint32_t maxDescriptorSetAccelerationStructures;
  uint32_t maxDescriptorSetUpdateAfterBindAccelerationStructures;
  uint32_t minAccelerationStructureScratchOffsetAlignment;
};

struct PhysicalDeviceRayTracingPipelinePropertiesKHR {
  StructureType sType;
  void *pNext;
  uint32_t shaderGroupHandleSize;
  uint32_t maxRayRecursionDepth;
  uint32_t maxShaderGroupStride;
  uint32_t shaderGroupBaseAlignment;
  uint32_t shaderGroupHandleCaptureReplaySize;
  uint32_t maxRayDispatchInvocationCount;
  uint32_t shaderGroupHandleAlignment;
  uint32_t maxRayHitAttributeSize;
};

struct PhysicalDeviceRayTracingPropertiesNV {
  StructureType sType;
  void *pNext;
  uint32_t shaderGroupHandleSize;
  uint32_t maxRecursionDepth;
  uint32_t maxShaderGroupStride;
  uint32_t shaderGroupBaseAlignment;
  uint64_t maxGeometryCount;
  uint64_t maxInstanceCount;
  uint64_t maxTriangleCount;
  uint32_t maxDescriptorSetAccelerationStructures;
};

struct StridedDeviceAddressRegionKHR {
  VkDeviceAddress deviceAddress;
  VkDeviceSize stride;
  VkDeviceSize size;
};

struct TraceRaysIndirectCommandKHR {
  uint32_t width;
  uint32_t height;
  uint32_t depth;
};

struct TraceRaysIndirectCommand2KHR {
  VkDeviceAddress raygenShaderRecordAddress;
  VkDeviceSize raygenShaderRecordSize;
  VkDeviceAddress missShaderBindingTableAddress;
  VkDeviceSize missShaderBindingTableSize;
  VkDeviceSize missShaderBindingTableStride;
  VkDeviceAddress hitShaderBindingTableAddress;
  VkDeviceSize hitShaderBindingTableSize;
  VkDeviceSize hitShaderBindingTableStride;
  VkDeviceAddress callableShaderBindingTableAddress;
  VkDeviceSize callableShaderBindingTableSize;
  VkDeviceSize callableShaderBindingTableStride;
  uint32_t width;
  uint32_t height;
  uint32_t depth;
};

struct PhysicalDeviceRayTracingMaintenance1FeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 rayTracingMaintenance1;
  VkBool32 rayTracingPipelineTraceRaysIndirect2;
};

struct DrmFormatModifierPropertiesEXT {
  uint64_t drmFormatModifier;
  uint32_t drmFormatModifierPlaneCount;
  FormatFeatureMask drmFormatModifierTilingFeatures;
};

struct DrmFormatModifierPropertiesListEXT {
  StructureType sType;
  void *pNext;
  uint32_t drmFormatModifierCount;
  DrmFormatModifierPropertiesEXT *pDrmFormatModifierProperties;
};

struct PhysicalDeviceImageDrmFormatModifierInfoEXT {
  StructureType sType;
  void *pNext;
  uint64_t drmFormatModifier;
  SharingMode sharingMode;
  uint32_t queueFamilyIndexCount;
  uint32_t *pQueueFamilyIndices;
};

struct ImageDrmFormatModifierListCreateInfoEXT {
  StructureType sType;
  void *pNext;
  uint32_t drmFormatModifierCount;
  uint64_t *pDrmFormatModifiers;
};

struct ImageDrmFormatModifierExplicitCreateInfoEXT {
  StructureType sType;
  void *pNext;
  uint64_t drmFormatModifier;
  uint32_t drmFormatModifierPlaneCount;
  SubresourceLayout *pPlaneLayouts;
};

struct ImageDrmFormatModifierPropertiesEXT {
  StructureType sType;
  void *pNext;
  uint64_t drmFormatModifier;
};

struct ImageStencilUsageCreateInfo {
  StructureType sType;
  void *pNext;
  ImageUsageMask stencilUsage;
};

struct DeviceMemoryOverallocationCreateInfoAMD {
  StructureType sType;
  void *pNext;
  MemoryOverallocationBehavior overallocationBehavior;
};

struct PhysicalDeviceFragmentDensityMapFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 fragmentDensityMap;
  VkBool32 fragmentDensityMapDynamic;
  VkBool32 fragmentDensityMapNonSubsampledImages;
};

struct PhysicalDeviceFragmentDensityMap2FeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 fragmentDensityMapDeferred;
};

struct PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM {
  StructureType sType;
  void *pNext;
  VkBool32 fragmentDensityMapOffset;
};

struct PhysicalDeviceFragmentDensityMapPropertiesEXT {
  StructureType sType;
  void *pNext;
  Extent2D minFragmentDensityTexelSize;
  Extent2D maxFragmentDensityTexelSize;
  VkBool32 fragmentDensityInvocations;
};

struct PhysicalDeviceFragmentDensityMap2PropertiesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 subsampledLoads;
  VkBool32 subsampledCoarseReconstructionEarlyAccess;
  uint32_t maxSubsampledArrayLayers;
  uint32_t maxDescriptorSetSubsampledSamplers;
};

struct PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM {
  StructureType sType;
  void *pNext;
  Extent2D fragmentDensityOffsetGranularity;
};

struct RenderPassFragmentDensityMapCreateInfoEXT {
  StructureType sType;
  void *pNext;
  AttachmentReference fragmentDensityMapAttachment;
};

struct SubpassFragmentDensityMapOffsetEndInfoQCOM {
  StructureType sType;
  void *pNext;
  uint32_t fragmentDensityOffsetCount;
  Offset2D *pFragmentDensityOffsets;
};

struct PhysicalDeviceScalarBlockLayoutFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 scalarBlockLayout;
};

struct SurfaceProtectedCapabilitiesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 supportsProtected;
};

struct PhysicalDeviceUniformBufferStandardLayoutFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 uniformBufferStandardLayout;
};

struct PhysicalDeviceDepthClipEnableFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 depthClipEnable;
};

struct PipelineRasterizationDepthClipStateCreateInfoEXT {
  StructureType sType;
  void *pNext;
  PipelineRasterizationDepthClipStateCreateMask flags;
  VkBool32 depthClipEnable;
};

struct PhysicalDeviceMemoryBudgetPropertiesEXT {
  StructureType sType;
  void *pNext;
  VkDeviceSize heapBudget[VK_MAX_MEMORY_HEAPS];
  VkDeviceSize heapUsage[VK_MAX_MEMORY_HEAPS];
};

struct PhysicalDeviceMemoryPriorityFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 memoryPriority;
};

struct MemoryPriorityAllocateInfoEXT {
  StructureType sType;
  void *pNext;
  float priority;
};

struct PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 pageableDeviceLocalMemory;
};

struct PhysicalDeviceBufferDeviceAddressFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 bufferDeviceAddress;
  VkBool32 bufferDeviceAddressCaptureReplay;
  VkBool32 bufferDeviceAddressMultiDevice;
};

struct PhysicalDeviceBufferDeviceAddressFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 bufferDeviceAddress;
  VkBool32 bufferDeviceAddressCaptureReplay;
  VkBool32 bufferDeviceAddressMultiDevice;
};

struct BufferDeviceAddressInfo {
  StructureType sType;
  void *pNext;
  VkBuffer buffer;
};

struct BufferOpaqueCaptureAddressCreateInfo {
  StructureType sType;
  void *pNext;
  uint64_t opaqueCaptureAddress;
};

struct BufferDeviceAddressCreateInfoEXT {
  StructureType sType;
  void *pNext;
  VkDeviceAddress deviceAddress;
};

struct PhysicalDeviceImageViewImageFormatInfoEXT {
  StructureType sType;
  void *pNext;
  ImageViewType imageViewType;
};

struct FilterCubicImageViewImageFormatPropertiesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 filterCubic;
  VkBool32 filterCubicMinmax;
};

struct PhysicalDeviceImagelessFramebufferFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 imagelessFramebuffer;
};

struct FramebufferAttachmentImageInfo {
  StructureType sType;
  void *pNext;
  ImageCreateMask flags;
  ImageUsageMask usage;
  uint32_t width;
  uint32_t height;
  uint32_t layerCount;
  uint32_t viewFormatCount;
  Format *pViewFormats;
};

struct FramebufferAttachmentsCreateInfo {
  StructureType sType;
  void *pNext;
  uint32_t attachmentImageInfoCount;
  FramebufferAttachmentImageInfo *pAttachmentImageInfos;
};

struct RenderPassAttachmentBeginInfo {
  StructureType sType;
  void *pNext;
  uint32_t attachmentCount;
  VkImageView *pAttachments;
};

struct PhysicalDeviceTextureCompressionASTCHDRFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 textureCompressionASTC_HDR;
};

struct PhysicalDeviceCooperativeMatrixFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 cooperativeMatrix;
  VkBool32 cooperativeMatrixRobustBufferAccess;
};

struct PhysicalDeviceCooperativeMatrixPropertiesNV {
  StructureType sType;
  void *pNext;
  ShaderStageMask cooperativeMatrixSupportedStages;
};

struct CooperativeMatrixPropertiesNV {
  StructureType sType;
  void *pNext;
  uint32_t MSize;
  uint32_t NSize;
  uint32_t KSize;
  VkComponentTypeNV AType;
  VkComponentTypeNV BType;
  VkComponentTypeNV CType;
  VkComponentTypeNV DType;
  VkScopeNV scope;
};

struct PhysicalDeviceYcbcrImageArraysFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 ycbcrImageArrays;
};

struct ImageViewHandleInfoNVX {
  StructureType sType;
  void *pNext;
  VkImageView imageView;
  DescriptorType descriptorType;
  VkSampler sampler;
};

struct ImageViewAddressPropertiesNVX {
  StructureType sType;
  void *pNext;
  VkDeviceAddress deviceAddress;
  VkDeviceSize size;
};

struct PipelineCreationFeedback {
  PipelineCreationFeedbackMask flags;
  uint64_t duration;
};

struct PipelineCreationFeedbackCreateInfo {
  StructureType sType;
  void *pNext;
  PipelineCreationFeedback *pPipelineCreationFeedback;
  uint32_t pipelineStageCreationFeedbackCount;
  PipelineCreationFeedback *pPipelineStageCreationFeedbacks;
};

struct PhysicalDevicePresentBarrierFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 presentBarrier;
};

struct SurfaceCapabilitiesPresentBarrierNV {
  StructureType sType;
  void *pNext;
  VkBool32 presentBarrierSupported;
};

struct SwapchainPresentBarrierCreateInfoNV {
  StructureType sType;
  void *pNext;
  VkBool32 presentBarrierEnable;
};

struct PhysicalDevicePerformanceQueryFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 performanceCounterQueryPools;
  VkBool32 performanceCounterMultipleQueryPools;
};

struct PhysicalDevicePerformanceQueryPropertiesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 allowCommandBufferQueryCopies;
};

struct PerformanceCounterKHR {
  StructureType sType;
  void *pNext;
  PerformanceCounterUnit unit;
  PerformanceCounterScope scope;
  PerformanceCounterStorage storage;
  uint8_t uuid[VK_UUID_SIZE];
};

struct PerformanceCounterDescriptionKHR {
  StructureType sType;
  void *pNext;
  PerformanceCounterDescriptionMask flags;
  char name[VK_MAX_DESCRIPTION_SIZE];
  char category[VK_MAX_DESCRIPTION_SIZE];
  char description[VK_MAX_DESCRIPTION_SIZE];
};

struct QueryPoolPerformanceCreateInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t queueFamilyIndex;
  uint32_t counterIndexCount;
  uint32_t *pCounterIndices;
};

struct AcquireProfilingLockInfoKHR {
  StructureType sType;
  void *pNext;
  AcquireProfilingLockMask flags;
  uint64_t timeout;
};

struct PerformanceQuerySubmitInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t counterPassIndex;
};

struct PerformanceQueryReservationInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t maxPerformanceQueriesPerPool;
};

struct HeadlessSurfaceCreateInfoEXT {
  StructureType sType;
  void *pNext;
  HeadlessSurfaceCreateMask flags;
};

struct PhysicalDeviceCoverageReductionModeFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 coverageReductionMode;
};

struct PipelineCoverageReductionStateCreateInfoNV {
  StructureType sType;
  void *pNext;
  PipelineCoverageReductionStateCreateMask flags;
  CoverageReductionMode coverageReductionMode;
};

struct FramebufferMixedSamplesCombinationNV {
  StructureType sType;
  void *pNext;
  CoverageReductionMode coverageReductionMode;
  SampleCountMaskBits rasterizationSamples;
  SampleCountMask depthStencilSamples;
  SampleCountMask colorSamples;
};

struct PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL {
  StructureType sType;
  void *pNext;
  VkBool32 shaderIntegerFunctions2;
};

struct PerformanceValueINTEL {
  PerformanceValueType type;
  VkPerformanceValueDataINTEL data;
};

struct InitializePerformanceApiInfoINTEL {
  StructureType sType;
  void *pNext;
  void *pUserData;
};

struct QueryPoolPerformanceQueryCreateInfoINTEL {
  StructureType sType;
  void *pNext;
  QueryPoolSamplingMode performanceCountersSampling;
};

struct PerformanceMarkerInfoINTEL {
  StructureType sType;
  void *pNext;
  uint64_t marker;
};

struct PerformanceStreamMarkerInfoINTEL {
  StructureType sType;
  void *pNext;
  uint32_t marker;
};

struct PerformanceOverrideInfoINTEL {
  StructureType sType;
  void *pNext;
  PerformanceOverrideType type;
  VkBool32 enable;
  uint64_t parameter;
};

struct PerformanceConfigurationAcquireInfoINTEL {
  StructureType sType;
  void *pNext;
  PerformanceConfigurationType type;
};

struct PhysicalDeviceShaderClockFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 shaderSubgroupClock;
  VkBool32 shaderDeviceClock;
};

struct PhysicalDeviceIndexTypeUint8FeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 indexTypeUint8;
};

struct PhysicalDeviceShaderSMBuiltinsPropertiesNV {
  StructureType sType;
  void *pNext;
  uint32_t shaderSMCount;
  uint32_t shaderWarpsPerSM;
};

struct PhysicalDeviceShaderSMBuiltinsFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 shaderSMBuiltins;
};

struct PhysicalDeviceFragmentShaderInterlockFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 fragmentShaderSampleInterlock;
  VkBool32 fragmentShaderPixelInterlock;
  VkBool32 fragmentShaderShadingRateInterlock;
};

struct PhysicalDeviceSeparateDepthStencilLayoutsFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 separateDepthStencilLayouts;
};

struct AttachmentReferenceStencilLayout {
  StructureType sType;
  void *pNext;
  ImageLayout stencilLayout;
};

struct PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 primitiveTopologyListRestart;
  VkBool32 primitiveTopologyPatchListRestart;
};

struct AttachmentDescriptionStencilLayout {
  StructureType sType;
  void *pNext;
  ImageLayout stencilInitialLayout;
  ImageLayout stencilFinalLayout;
};

struct PhysicalDevicePipelineExecutablePropertiesFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 pipelineExecutableInfo;
};

struct PipelineInfoKHR {
  StructureType sType;
  void *pNext;
  VkPipeline pipeline;
};

struct PipelineExecutablePropertiesKHR {
  StructureType sType;
  void *pNext;
  ShaderStageMask stages;
  char name[VK_MAX_DESCRIPTION_SIZE];
  char description[VK_MAX_DESCRIPTION_SIZE];
  uint32_t subgroupSize;
};

struct PipelineExecutableInfoKHR {
  StructureType sType;
  void *pNext;
  VkPipeline pipeline;
  uint32_t executableIndex;
};

struct PipelineExecutableStatisticKHR {
  StructureType sType;
  void *pNext;
  char name[VK_MAX_DESCRIPTION_SIZE];
  char description[VK_MAX_DESCRIPTION_SIZE];
  PipelineExecutableStatisticFormat format;
  VkPipelineExecutableStatisticValueKHR value;
};

struct PipelineExecutableInternalRepresentationKHR {
  StructureType sType;
  void *pNext;
  char name[VK_MAX_DESCRIPTION_SIZE];
  char description[VK_MAX_DESCRIPTION_SIZE];
  VkBool32 isText;
  size_t dataSize;
  void *pData;
};

struct PhysicalDeviceShaderDemoteToHelperInvocationFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 shaderDemoteToHelperInvocation;
};

struct PhysicalDeviceTexelBufferAlignmentFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 texelBufferAlignment;
};

struct PhysicalDeviceTexelBufferAlignmentProperties {
  StructureType sType;
  void *pNext;
  VkDeviceSize storageTexelBufferOffsetAlignmentBytes;
  VkBool32 storageTexelBufferOffsetSingleTexelAlignment;
  VkDeviceSize uniformTexelBufferOffsetAlignmentBytes;
  VkBool32 uniformTexelBufferOffsetSingleTexelAlignment;
};

struct PhysicalDeviceSubgroupSizeControlFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 subgroupSizeControl;
  VkBool32 computeFullSubgroups;
};

struct PhysicalDeviceSubgroupSizeControlProperties {
  StructureType sType;
  void *pNext;
  uint32_t minSubgroupSize;
  uint32_t maxSubgroupSize;
  uint32_t maxComputeWorkgroupSubgroups;
  ShaderStageMask requiredSubgroupSizeStages;
};

struct PipelineShaderStageRequiredSubgroupSizeCreateInfo {
  StructureType sType;
  void *pNext;
  uint32_t requiredSubgroupSize;
};

struct SubpassShadingPipelineCreateInfoHUAWEI {
  StructureType sType;
  void *pNext;
  VkRenderPass renderPass;
  uint32_t subpass;
};

struct PhysicalDeviceSubpassShadingPropertiesHUAWEI {
  StructureType sType;
  void *pNext;
  uint32_t maxSubpassShadingWorkgroupSizeAspectRatio;
};

struct PhysicalDeviceClusterCullingShaderPropertiesHUAWEI {
  StructureType sType;
  void *pNext;
  uint32_t maxWorkGroupCount[3];
  uint32_t maxWorkGroupSize[3];
  uint32_t maxOutputClusterCount;
  VkDeviceSize indirectBufferOffsetAlignment;
};

struct MemoryOpaqueCaptureAddressAllocateInfo {
  StructureType sType;
  void *pNext;
  uint64_t opaqueCaptureAddress;
};

struct DeviceMemoryOpaqueCaptureAddressInfo {
  StructureType sType;
  void *pNext;
  VkDeviceMemory memory;
};

struct PhysicalDeviceLineRasterizationFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 rectangularLines;
  VkBool32 bresenhamLines;
  VkBool32 smoothLines;
  VkBool32 stippledRectangularLines;
  VkBool32 stippledBresenhamLines;
  VkBool32 stippledSmoothLines;
};

struct PhysicalDeviceLineRasterizationPropertiesKHR {
  StructureType sType;
  void *pNext;
  uint32_t lineSubPixelPrecisionBits;
};

struct PipelineRasterizationLineStateCreateInfoKHR {
  StructureType sType;
  void *pNext;
  LineRasterizationMode lineRasterizationMode;
  VkBool32 stippledLineEnable;
  uint32_t lineStippleFactor;
  uint16_t lineStipplePattern;
};

struct PhysicalDevicePipelineCreationCacheControlFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 pipelineCreationCacheControl;
};

struct PhysicalDeviceVulkan11Features {
  StructureType sType;
  void *pNext;
  VkBool32 storageBuffer16BitAccess;
  VkBool32 uniformAndStorageBuffer16BitAccess;
  VkBool32 storagePushConstant16;
  VkBool32 storageInputOutput16;
  VkBool32 multiview;
  VkBool32 multiviewGeometryShader;
  VkBool32 multiviewTessellationShader;
  VkBool32 variablePointersStorageBuffer;
  VkBool32 variablePointers;
  VkBool32 protectedMemory;
  VkBool32 samplerYcbcrConversion;
  VkBool32 shaderDrawParameters;
};

struct PhysicalDeviceVulkan11Properties {
  StructureType sType;
  void *pNext;
  uint8_t deviceUUID[VK_UUID_SIZE];
  uint8_t driverUUID[VK_UUID_SIZE];
  uint8_t deviceLUID[VK_LUID_SIZE];
  uint32_t deviceNodeMask;
  VkBool32 deviceLUIDValid;
  uint32_t subgroupSize;
  ShaderStageMask subgroupSupportedStages;
  SubgroupFeatureMask subgroupSupportedOperations;
  VkBool32 subgroupQuadOperationsInAllStages;
  PointClippingBehavior pointClippingBehavior;
  uint32_t maxMultiviewViewCount;
  uint32_t maxMultiviewInstanceIndex;
  VkBool32 protectedNoFault;
  uint32_t maxPerSetDescriptors;
  VkDeviceSize maxMemoryAllocationSize;
};

struct PhysicalDeviceVulkan12Features {
  StructureType sType;
  void *pNext;
  VkBool32 samplerMirrorClampToEdge;
  VkBool32 drawIndirectCount;
  VkBool32 storageBuffer8BitAccess;
  VkBool32 uniformAndStorageBuffer8BitAccess;
  VkBool32 storagePushConstant8;
  VkBool32 shaderBufferInt64Atomics;
  VkBool32 shaderSharedInt64Atomics;
  VkBool32 shaderFloat16;
  VkBool32 shaderInt8;
  VkBool32 descriptorIndexing;
  VkBool32 shaderInputAttachmentArrayDynamicIndexing;
  VkBool32 shaderUniformTexelBufferArrayDynamicIndexing;
  VkBool32 shaderStorageTexelBufferArrayDynamicIndexing;
  VkBool32 shaderUniformBufferArrayNonUniformIndexing;
  VkBool32 shaderSampledImageArrayNonUniformIndexing;
  VkBool32 shaderStorageBufferArrayNonUniformIndexing;
  VkBool32 shaderStorageImageArrayNonUniformIndexing;
  VkBool32 shaderInputAttachmentArrayNonUniformIndexing;
  VkBool32 shaderUniformTexelBufferArrayNonUniformIndexing;
  VkBool32 shaderStorageTexelBufferArrayNonUniformIndexing;
  VkBool32 descriptorBindingUniformBufferUpdateAfterBind;
  VkBool32 descriptorBindingSampledImageUpdateAfterBind;
  VkBool32 descriptorBindingStorageImageUpdateAfterBind;
  VkBool32 descriptorBindingStorageBufferUpdateAfterBind;
  VkBool32 descriptorBindingUniformTexelBufferUpdateAfterBind;
  VkBool32 descriptorBindingStorageTexelBufferUpdateAfterBind;
  VkBool32 descriptorBindingUpdateUnusedWhilePending;
  VkBool32 descriptorBindingPartiallyBound;
  VkBool32 descriptorBindingVariableDescriptorCount;
  VkBool32 runtimeDescriptorArray;
  VkBool32 samplerFilterMinmax;
  VkBool32 scalarBlockLayout;
  VkBool32 imagelessFramebuffer;
  VkBool32 uniformBufferStandardLayout;
  VkBool32 shaderSubgroupExtendedTypes;
  VkBool32 separateDepthStencilLayouts;
  VkBool32 hostQueryReset;
  VkBool32 timelineSemaphore;
  VkBool32 bufferDeviceAddress;
  VkBool32 bufferDeviceAddressCaptureReplay;
  VkBool32 bufferDeviceAddressMultiDevice;
  VkBool32 vulkanMemoryModel;
  VkBool32 vulkanMemoryModelDeviceScope;
  VkBool32 vulkanMemoryModelAvailabilityVisibilityChains;
  VkBool32 shaderOutputViewportIndex;
  VkBool32 shaderOutputLayer;
  VkBool32 subgroupBroadcastDynamicId;
};

struct PhysicalDeviceVulkan12Properties {
  StructureType sType;
  void *pNext;
  DriverId driverID;
  char driverName[VK_MAX_DRIVER_NAME_SIZE];
  char driverInfo[VK_MAX_DRIVER_INFO_SIZE];
  ConformanceVersion conformanceVersion;
  ShaderFloatControlsIndependence denormBehaviorIndependence;
  ShaderFloatControlsIndependence roundingModeIndependence;
  VkBool32 shaderSignedZeroInfNanPreserveFloat16;
  VkBool32 shaderSignedZeroInfNanPreserveFloat32;
  VkBool32 shaderSignedZeroInfNanPreserveFloat64;
  VkBool32 shaderDenormPreserveFloat16;
  VkBool32 shaderDenormPreserveFloat32;
  VkBool32 shaderDenormPreserveFloat64;
  VkBool32 shaderDenormFlushToZeroFloat16;
  VkBool32 shaderDenormFlushToZeroFloat32;
  VkBool32 shaderDenormFlushToZeroFloat64;
  VkBool32 shaderRoundingModeRTEFloat16;
  VkBool32 shaderRoundingModeRTEFloat32;
  VkBool32 shaderRoundingModeRTEFloat64;
  VkBool32 shaderRoundingModeRTZFloat16;
  VkBool32 shaderRoundingModeRTZFloat32;
  VkBool32 shaderRoundingModeRTZFloat64;
  uint32_t maxUpdateAfterBindDescriptorsInAllPools;
  VkBool32 shaderUniformBufferArrayNonUniformIndexingNative;
  VkBool32 shaderSampledImageArrayNonUniformIndexingNative;
  VkBool32 shaderStorageBufferArrayNonUniformIndexingNative;
  VkBool32 shaderStorageImageArrayNonUniformIndexingNative;
  VkBool32 shaderInputAttachmentArrayNonUniformIndexingNative;
  VkBool32 robustBufferAccessUpdateAfterBind;
  VkBool32 quadDivergentImplicitLod;
  uint32_t maxPerStageDescriptorUpdateAfterBindSamplers;
  uint32_t maxPerStageDescriptorUpdateAfterBindUniformBuffers;
  uint32_t maxPerStageDescriptorUpdateAfterBindStorageBuffers;
  uint32_t maxPerStageDescriptorUpdateAfterBindSampledImages;
  uint32_t maxPerStageDescriptorUpdateAfterBindStorageImages;
  uint32_t maxPerStageDescriptorUpdateAfterBindInputAttachments;
  uint32_t maxPerStageUpdateAfterBindResources;
  uint32_t maxDescriptorSetUpdateAfterBindSamplers;
  uint32_t maxDescriptorSetUpdateAfterBindUniformBuffers;
  uint32_t maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
  uint32_t maxDescriptorSetUpdateAfterBindStorageBuffers;
  uint32_t maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
  uint32_t maxDescriptorSetUpdateAfterBindSampledImages;
  uint32_t maxDescriptorSetUpdateAfterBindStorageImages;
  uint32_t maxDescriptorSetUpdateAfterBindInputAttachments;
  ResolveModeMask supportedDepthResolveModes;
  ResolveModeMask supportedStencilResolveModes;
  VkBool32 independentResolveNone;
  VkBool32 independentResolve;
  VkBool32 filterMinmaxSingleComponentFormats;
  VkBool32 filterMinmaxImageComponentMapping;
  uint64_t maxTimelineSemaphoreValueDifference;
  SampleCountMask framebufferIntegerColorSampleCounts;
};

struct PhysicalDeviceVulkan13Features {
  StructureType sType;
  void *pNext;
  VkBool32 robustImageAccess;
  VkBool32 inlineUniformBlock;
  VkBool32 descriptorBindingInlineUniformBlockUpdateAfterBind;
  VkBool32 pipelineCreationCacheControl;
  VkBool32 privateData;
  VkBool32 shaderDemoteToHelperInvocation;
  VkBool32 shaderTerminateInvocation;
  VkBool32 subgroupSizeControl;
  VkBool32 computeFullSubgroups;
  VkBool32 synchronization2;
  VkBool32 textureCompressionASTC_HDR;
  VkBool32 shaderZeroInitializeWorkgroupMemory;
  VkBool32 dynamicRendering;
  VkBool32 shaderIntegerDotProduct;
  VkBool32 maintenance4;
};

struct PhysicalDeviceVulkan13Properties {
  StructureType sType;
  void *pNext;
  uint32_t minSubgroupSize;
  uint32_t maxSubgroupSize;
  uint32_t maxComputeWorkgroupSubgroups;
  ShaderStageMask requiredSubgroupSizeStages;
  uint32_t maxInlineUniformBlockSize;
  uint32_t maxPerStageDescriptorInlineUniformBlocks;
  uint32_t maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
  uint32_t maxDescriptorSetInlineUniformBlocks;
  uint32_t maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
  uint32_t maxInlineUniformTotalSize;
  VkBool32 integerDotProduct8BitUnsignedAccelerated;
  VkBool32 integerDotProduct8BitSignedAccelerated;
  VkBool32 integerDotProduct8BitMixedSignednessAccelerated;
  VkBool32 integerDotProduct4x8BitPackedUnsignedAccelerated;
  VkBool32 integerDotProduct4x8BitPackedSignedAccelerated;
  VkBool32 integerDotProduct4x8BitPackedMixedSignednessAccelerated;
  VkBool32 integerDotProduct16BitUnsignedAccelerated;
  VkBool32 integerDotProduct16BitSignedAccelerated;
  VkBool32 integerDotProduct16BitMixedSignednessAccelerated;
  VkBool32 integerDotProduct32BitUnsignedAccelerated;
  VkBool32 integerDotProduct32BitSignedAccelerated;
  VkBool32 integerDotProduct32BitMixedSignednessAccelerated;
  VkBool32 integerDotProduct64BitUnsignedAccelerated;
  VkBool32 integerDotProduct64BitSignedAccelerated;
  VkBool32 integerDotProduct64BitMixedSignednessAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating8BitSignedAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating16BitSignedAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating32BitSignedAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating64BitSignedAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
  VkDeviceSize storageTexelBufferOffsetAlignmentBytes;
  VkBool32 storageTexelBufferOffsetSingleTexelAlignment;
  VkDeviceSize uniformTexelBufferOffsetAlignmentBytes;
  VkBool32 uniformTexelBufferOffsetSingleTexelAlignment;
  VkDeviceSize maxBufferSize;
};

struct PipelineCompilerControlCreateInfoAMD {
  StructureType sType;
  void *pNext;
  PipelineCompilerControlMask compilerControlFlags;
};

struct PhysicalDeviceCoherentMemoryFeaturesAMD {
  StructureType sType;
  void *pNext;
  VkBool32 deviceCoherentMemory;
};

struct PhysicalDeviceToolProperties {
  StructureType sType;
  void *pNext;
  char name[VK_MAX_EXTENSION_NAME_SIZE];
  char version[VK_MAX_EXTENSION_NAME_SIZE];
  ToolPurposeMask purposes;
  char description[VK_MAX_DESCRIPTION_SIZE];
  char layer[VK_MAX_EXTENSION_NAME_SIZE];
};

struct SamplerCustomBorderColorCreateInfoEXT {
  StructureType sType;
  void *pNext;
  VkClearColorValue customBorderColor;
  Format format;
};

struct PhysicalDeviceCustomBorderColorPropertiesEXT {
  StructureType sType;
  void *pNext;
  uint32_t maxCustomBorderColorSamplers;
};

struct PhysicalDeviceCustomBorderColorFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 customBorderColors;
  VkBool32 customBorderColorWithoutFormat;
};

struct SamplerBorderColorComponentMappingCreateInfoEXT {
  StructureType sType;
  void *pNext;
  ComponentMapping components;
  VkBool32 srgb;
};

struct PhysicalDeviceBorderColorSwizzleFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 borderColorSwizzle;
  VkBool32 borderColorSwizzleFromImage;
};

struct AccelerationStructureGeometryTrianglesDataKHR {
  StructureType sType;
  void *pNext;
  Format vertexFormat;
  VkDeviceOrHostAddressConstKHR vertexData;
  VkDeviceSize vertexStride;
  uint32_t maxVertex;
  IndexType indexType;
  VkDeviceOrHostAddressConstKHR indexData;
  VkDeviceOrHostAddressConstKHR transformData;
};

struct AccelerationStructureGeometryAabbsDataKHR {
  StructureType sType;
  void *pNext;
  VkDeviceOrHostAddressConstKHR data;
  VkDeviceSize stride;
};

struct AccelerationStructureGeometryInstancesDataKHR {
  StructureType sType;
  void *pNext;
  VkBool32 arrayOfPointers;
  VkDeviceOrHostAddressConstKHR data;
};

struct AccelerationStructureGeometryKHR {
  StructureType sType;
  void *pNext;
  GeometryType geometryType;
  VkAccelerationStructureGeometryDataKHR geometry;
  GeometryMask flags;
};

struct AccelerationStructureBuildGeometryInfoKHR {
  StructureType sType;
  void *pNext;
  AccelerationStructureType type;
  BuildAccelerationStructureMask flags;
  BuildAccelerationStructureMode mode;
  VkAccelerationStructureKHR srcAccelerationStructure;
  VkAccelerationStructureKHR dstAccelerationStructure;
  uint32_t geometryCount;
  AccelerationStructureGeometryKHR *pGeometries;
  AccelerationStructureGeometryKHR *const *ppGeometries;
  VkDeviceOrHostAddressKHR scratchData;
};

struct AccelerationStructureBuildRangeInfoKHR {
  uint32_t primitiveCount;
  uint32_t primitiveOffset;
  uint32_t firstVertex;
  uint32_t transformOffset;
};

struct AccelerationStructureCreateInfoKHR {
  StructureType sType;
  void *pNext;
  AccelerationStructureCreateMask createFlags;
  VkBuffer buffer;
  VkDeviceSize offset;
  VkDeviceSize size;
  AccelerationStructureType type;
  VkDeviceAddress deviceAddress;
};

struct AabbPositionsKHR {
  float minX;
  float minY;
  float minZ;
  float maxX;
  float maxY;
  float maxZ;
};

struct TransformMatrixKHR {
  float matrix[3][4];
};

struct AccelerationStructureInstanceKHR {
  TransformMatrixKHR transform;
  uint32_t instanceCustomIndex : 24;
  uint32_t mask : 8;
  uint32_t instanceShaderBindingTableRecordOffset : 24;
  VkGeometryInstanceFlagsKHR flags : 8;
  uint64_t accelerationStructureReference;
};

struct AccelerationStructureDeviceAddressInfoKHR {
  StructureType sType;
  void *pNext;
  VkAccelerationStructureKHR accelerationStructure;
};

struct AccelerationStructureVersionInfoKHR {
  StructureType sType;
  void *pNext;
  uint8_t *pVersionData;
};

struct CopyAccelerationStructureInfoKHR {
  StructureType sType;
  void *pNext;
  VkAccelerationStructureKHR src;
  VkAccelerationStructureKHR dst;
  CopyAccelerationStructureMode mode;
};

struct CopyAccelerationStructureToMemoryInfoKHR {
  StructureType sType;
  void *pNext;
  VkAccelerationStructureKHR src;
  VkDeviceOrHostAddressKHR dst;
  CopyAccelerationStructureMode mode;
};

struct CopyMemoryToAccelerationStructureInfoKHR {
  StructureType sType;
  void *pNext;
  VkDeviceOrHostAddressConstKHR src;
  VkAccelerationStructureKHR dst;
  CopyAccelerationStructureMode mode;
};

struct PhysicalDeviceExtendedDynamicStateFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 extendedDynamicState;
};

struct PhysicalDeviceExtendedDynamicState2FeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 extendedDynamicState2;
  VkBool32 extendedDynamicState2LogicOp;
  VkBool32 extendedDynamicState2PatchControlPoints;
};

struct PhysicalDeviceExtendedDynamicState3FeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 extendedDynamicState3TessellationDomainOrigin;
  VkBool32 extendedDynamicState3DepthClampEnable;
  VkBool32 extendedDynamicState3PolygonMode;
  VkBool32 extendedDynamicState3RasterizationSamples;
  VkBool32 extendedDynamicState3SampleMask;
  VkBool32 extendedDynamicState3AlphaToCoverageEnable;
  VkBool32 extendedDynamicState3AlphaToOneEnable;
  VkBool32 extendedDynamicState3LogicOpEnable;
  VkBool32 extendedDynamicState3ColorBlendEnable;
  VkBool32 extendedDynamicState3ColorBlendEquation;
  VkBool32 extendedDynamicState3ColorWriteMask;
  VkBool32 extendedDynamicState3RasterizationStream;
  VkBool32 extendedDynamicState3ConservativeRasterizationMode;
  VkBool32 extendedDynamicState3ExtraPrimitiveOverestimationSize;
  VkBool32 extendedDynamicState3DepthClipEnable;
  VkBool32 extendedDynamicState3SampleLocationsEnable;
  VkBool32 extendedDynamicState3ColorBlendAdvanced;
  VkBool32 extendedDynamicState3ProvokingVertexMode;
  VkBool32 extendedDynamicState3LineRasterizationMode;
  VkBool32 extendedDynamicState3LineStippleEnable;
  VkBool32 extendedDynamicState3DepthClipNegativeOneToOne;
  VkBool32 extendedDynamicState3ViewportWScalingEnable;
  VkBool32 extendedDynamicState3ViewportSwizzle;
  VkBool32 extendedDynamicState3CoverageToColorEnable;
  VkBool32 extendedDynamicState3CoverageToColorLocation;
  VkBool32 extendedDynamicState3CoverageModulationMode;
  VkBool32 extendedDynamicState3CoverageModulationTableEnable;
  VkBool32 extendedDynamicState3CoverageModulationTable;
  VkBool32 extendedDynamicState3CoverageReductionMode;
  VkBool32 extendedDynamicState3RepresentativeFragmentTestEnable;
  VkBool32 extendedDynamicState3ShadingRateImageEnable;
};

struct PhysicalDeviceExtendedDynamicState3PropertiesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 dynamicPrimitiveTopologyUnrestricted;
};

struct ColorBlendEquationEXT {
  BlendFactor srcColorBlendFactor;
  BlendFactor dstColorBlendFactor;
  BlendOp colorBlendOp;
  BlendFactor srcAlphaBlendFactor;
  BlendFactor dstAlphaBlendFactor;
  BlendOp alphaBlendOp;
};

struct ColorBlendAdvancedEXT {
  BlendOp advancedBlendOp;
  VkBool32 srcPremultiplied;
  VkBool32 dstPremultiplied;
  BlendOverlap blendOverlap;
  VkBool32 clampResults;
};

struct RenderPassTransformBeginInfoQCOM {
  StructureType sType;
  void *pNext;
  SurfaceTransformMaskBits transform;
};

struct CopyCommandTransformInfoQCOM {
  StructureType sType;
  void *pNext;
  SurfaceTransformMaskBits transform;
};

struct CommandBufferInheritanceRenderPassTransformInfoQCOM {
  StructureType sType;
  void *pNext;
  SurfaceTransformMaskBits transform;
  Rect2D renderArea;
};

struct PhysicalDeviceDiagnosticsConfigFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 diagnosticsConfig;
};

struct DeviceDiagnosticsConfigCreateInfoNV {
  StructureType sType;
  void *pNext;
  DeviceDiagnosticsConfigMask flags;
};

struct PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 shaderZeroInitializeWorkgroupMemory;
};

struct PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 shaderSubgroupUniformControlFlow;
};

struct PhysicalDeviceRobustness2FeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 robustBufferAccess2;
  VkBool32 robustImageAccess2;
  VkBool32 nullDescriptor;
};

struct PhysicalDeviceRobustness2PropertiesEXT {
  StructureType sType;
  void *pNext;
  VkDeviceSize robustStorageBufferAccessSizeAlignment;
  VkDeviceSize robustUniformBufferAccessSizeAlignment;
};

struct PhysicalDeviceImageRobustnessFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 robustImageAccess;
};

struct PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 workgroupMemoryExplicitLayout;
  VkBool32 workgroupMemoryExplicitLayoutScalarBlockLayout;
  VkBool32 workgroupMemoryExplicitLayout8BitAccess;
  VkBool32 workgroupMemoryExplicitLayout16BitAccess;
};

struct PhysicalDevice4444FormatsFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 formatA4R4G4B4;
  VkBool32 formatA4B4G4R4;
};

struct PhysicalDeviceSubpassShadingFeaturesHUAWEI {
  StructureType sType;
  void *pNext;
  VkBool32 subpassShading;
};

struct PhysicalDeviceClusterCullingShaderFeaturesHUAWEI {
  StructureType sType;
  void *pNext;
  VkBool32 clustercullingShader;
  VkBool32 multiviewClusterCullingShader;
};

struct PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI {
  StructureType sType;
  void *pNext;
  VkBool32 clusterShadingRate;
};

struct BufferCopy2 {
  StructureType sType;
  void *pNext;
  VkDeviceSize srcOffset;
  VkDeviceSize dstOffset;
  VkDeviceSize size;
};

struct ImageCopy2 {
  StructureType sType;
  void *pNext;
  ImageSubresourceLayers srcSubresource;
  Offset3D srcOffset;
  ImageSubresourceLayers dstSubresource;
  Offset3D dstOffset;
  Extent3D extent;
};

struct ImageBlit2 {
  StructureType sType;
  void *pNext;
  ImageSubresourceLayers srcSubresource;
  Offset3D srcOffsets[2];
  ImageSubresourceLayers dstSubresource;
  Offset3D dstOffsets[2];
};

struct BufferImageCopy2 {
  StructureType sType;
  void *pNext;
  VkDeviceSize bufferOffset;
  uint32_t bufferRowLength;
  uint32_t bufferImageHeight;
  ImageSubresourceLayers imageSubresource;
  Offset3D imageOffset;
  Extent3D imageExtent;
};

struct ImageResolve2 {
  StructureType sType;
  void *pNext;
  ImageSubresourceLayers srcSubresource;
  Offset3D srcOffset;
  ImageSubresourceLayers dstSubresource;
  Offset3D dstOffset;
  Extent3D extent;
};

struct CopyBufferInfo2 {
  StructureType sType;
  void *pNext;
  VkBuffer srcBuffer;
  VkBuffer dstBuffer;
  uint32_t regionCount;
  BufferCopy2 *pRegions;
};

struct CopyImageInfo2 {
  StructureType sType;
  void *pNext;
  VkImage srcImage;
  ImageLayout srcImageLayout;
  VkImage dstImage;
  ImageLayout dstImageLayout;
  uint32_t regionCount;
  ImageCopy2 *pRegions;
};

struct BlitImageInfo2 {
  StructureType sType;
  void *pNext;
  VkImage srcImage;
  ImageLayout srcImageLayout;
  VkImage dstImage;
  ImageLayout dstImageLayout;
  uint32_t regionCount;
  ImageBlit2 *pRegions;
  Filter filter;
};

struct CopyBufferToImageInfo2 {
  StructureType sType;
  void *pNext;
  VkBuffer srcBuffer;
  VkImage dstImage;
  ImageLayout dstImageLayout;
  uint32_t regionCount;
  BufferImageCopy2 *pRegions;
};

struct CopyImageToBufferInfo2 {
  StructureType sType;
  void *pNext;
  VkImage srcImage;
  ImageLayout srcImageLayout;
  VkBuffer dstBuffer;
  uint32_t regionCount;
  BufferImageCopy2 *pRegions;
};

struct ResolveImageInfo2 {
  StructureType sType;
  void *pNext;
  VkImage srcImage;
  ImageLayout srcImageLayout;
  VkImage dstImage;
  ImageLayout dstImageLayout;
  uint32_t regionCount;
  ImageResolve2 *pRegions;
};

struct PhysicalDeviceShaderImageAtomicInt64FeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 shaderImageInt64Atomics;
  VkBool32 sparseImageInt64Atomics;
};

struct FragmentShadingRateAttachmentInfoKHR {
  StructureType sType;
  void *pNext;
  AttachmentReference2 *pFragmentShadingRateAttachment;
  Extent2D shadingRateAttachmentTexelSize;
};

struct PipelineFragmentShadingRateStateCreateInfoKHR {
  StructureType sType;
  void *pNext;
  Extent2D fragmentSize;
  FragmentShadingRateCombinerOp combinerOps[2];
};

struct PhysicalDeviceFragmentShadingRateFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 pipelineFragmentShadingRate;
  VkBool32 primitiveFragmentShadingRate;
  VkBool32 attachmentFragmentShadingRate;
};

struct PhysicalDeviceFragmentShadingRatePropertiesKHR {
  StructureType sType;
  void *pNext;
  Extent2D minFragmentShadingRateAttachmentTexelSize;
  Extent2D maxFragmentShadingRateAttachmentTexelSize;
  uint32_t maxFragmentShadingRateAttachmentTexelSizeAspectRatio;
  VkBool32 primitiveFragmentShadingRateWithMultipleViewports;
  VkBool32 layeredShadingRateAttachments;
  VkBool32 fragmentShadingRateNonTrivialCombinerOps;
  Extent2D maxFragmentSize;
  uint32_t maxFragmentSizeAspectRatio;
  uint32_t maxFragmentShadingRateCoverageSamples;
  SampleCountMaskBits maxFragmentShadingRateRasterizationSamples;
  VkBool32 fragmentShadingRateWithShaderDepthStencilWrites;
  VkBool32 fragmentShadingRateWithSampleMask;
  VkBool32 fragmentShadingRateWithShaderSampleMask;
  VkBool32 fragmentShadingRateWithConservativeRasterization;
  VkBool32 fragmentShadingRateWithFragmentShaderInterlock;
  VkBool32 fragmentShadingRateWithCustomSampleLocations;
  VkBool32 fragmentShadingRateStrictMultiplyCombiner;
};

struct PhysicalDeviceFragmentShadingRateKHR {
  StructureType sType;
  void *pNext;
  SampleCountMask sampleCounts;
  Extent2D fragmentSize;
};

struct PhysicalDeviceShaderTerminateInvocationFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 shaderTerminateInvocation;
};

struct PhysicalDeviceFragmentShadingRateEnumsFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 fragmentShadingRateEnums;
  VkBool32 supersampleFragmentShadingRates;
  VkBool32 noInvocationFragmentShadingRates;
};

struct PhysicalDeviceFragmentShadingRateEnumsPropertiesNV {
  StructureType sType;
  void *pNext;
  SampleCountMaskBits maxFragmentShadingRateInvocationCount;
};

struct PipelineFragmentShadingRateEnumStateCreateInfoNV {
  StructureType sType;
  void *pNext;
  FragmentShadingRateType shadingRateType;
  FragmentShadingRate shadingRate;
  FragmentShadingRateCombinerOp combinerOps[2];
};

struct AccelerationStructureBuildSizesInfoKHR {
  StructureType sType;
  void *pNext;
  VkDeviceSize accelerationStructureSize;
  VkDeviceSize updateScratchSize;
  VkDeviceSize buildScratchSize;
};

struct PhysicalDeviceImage2DViewOf3DFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 image2DViewOf3D;
  VkBool32 sampler2DViewOf3D;
};

struct PhysicalDeviceImageSlicedViewOf3DFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 imageSlicedViewOf3D;
};

struct PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 attachmentFeedbackLoopDynamicState;
};

struct PhysicalDeviceLegacyVertexAttributesFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 legacyVertexAttributes;
};

struct PhysicalDeviceLegacyVertexAttributesPropertiesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 nativeUnalignedPerformance;
};

struct PhysicalDeviceMutableDescriptorTypeFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 mutableDescriptorType;
};

struct MutableDescriptorTypeListEXT {
  uint32_t descriptorTypeCount;
  DescriptorType *pDescriptorTypes;
};

struct MutableDescriptorTypeCreateInfoEXT {
  StructureType sType;
  void *pNext;
  uint32_t mutableDescriptorTypeListCount;
  MutableDescriptorTypeListEXT *pMutableDescriptorTypeLists;
};

struct PhysicalDeviceDepthClipControlFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 depthClipControl;
};

struct PipelineViewportDepthClipControlCreateInfoEXT {
  StructureType sType;
  void *pNext;
  VkBool32 negativeOneToOne;
};

struct PhysicalDeviceVertexInputDynamicStateFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 vertexInputDynamicState;
};

struct PhysicalDeviceExternalMemoryRDMAFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 externalMemoryRDMA;
};

struct PhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 shaderRelaxedExtendedInstruction;
};

struct VertexInputBindingDescription2EXT {
  StructureType sType;
  void *pNext;
  uint32_t binding;
  uint32_t stride;
  VertexInputRate inputRate;
  uint32_t divisor;
};

struct VertexInputAttributeDescription2EXT {
  StructureType sType;
  void *pNext;
  uint32_t location;
  uint32_t binding;
  Format format;
  uint32_t offset;
};

struct PhysicalDeviceColorWriteEnableFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 colorWriteEnable;
};

struct PipelineColorWriteCreateInfoEXT {
  StructureType sType;
  void *pNext;
  uint32_t attachmentCount;
  VkBool32 *pColorWriteEnables;
};

struct MemoryBarrier2 {
  StructureType sType;
  void *pNext;
  PipelineStageMask2 srcStageMask;
  AccessMask2 srcAccessMask;
  PipelineStageMask2 dstStageMask;
  AccessMask2 dstAccessMask;
};

struct ImageMemoryBarrier2 {
  StructureType sType;
  void *pNext;
  PipelineStageMask2 srcStageMask;
  AccessMask2 srcAccessMask;
  PipelineStageMask2 dstStageMask;
  AccessMask2 dstAccessMask;
  ImageLayout oldLayout;
  ImageLayout newLayout;
  uint32_t srcQueueFamilyIndex;
  uint32_t dstQueueFamilyIndex;
  VkImage image;
  ImageSubresourceRange subresourceRange;
};

struct BufferMemoryBarrier2 {
  StructureType sType;
  void *pNext;
  PipelineStageMask2 srcStageMask;
  AccessMask2 srcAccessMask;
  PipelineStageMask2 dstStageMask;
  AccessMask2 dstAccessMask;
  uint32_t srcQueueFamilyIndex;
  uint32_t dstQueueFamilyIndex;
  VkBuffer buffer;
  VkDeviceSize offset;
  VkDeviceSize size;
};

struct DependencyInfo {
  StructureType sType;
  void *pNext;
  DependencyMask dependencyFlags;
  uint32_t memoryBarrierCount;
  MemoryBarrier2 *pMemoryBarriers;
  uint32_t bufferMemoryBarrierCount;
  BufferMemoryBarrier2 *pBufferMemoryBarriers;
  uint32_t imageMemoryBarrierCount;
  ImageMemoryBarrier2 *pImageMemoryBarriers;
};

struct SemaphoreSubmitInfo {
  StructureType sType;
  void *pNext;
  VkSemaphore semaphore;
  uint64_t value;
  PipelineStageMask2 stageMask;
  uint32_t deviceIndex;
};

struct CommandBufferSubmitInfo {
  StructureType sType;
  void *pNext;
  VkCommandBuffer commandBuffer;
  uint32_t deviceMask;
};

struct SubmitInfo2 {
  StructureType sType;
  void *pNext;
  SubmitMask flags;
  uint32_t waitSemaphoreInfoCount;
  SemaphoreSubmitInfo *pWaitSemaphoreInfos;
  uint32_t commandBufferInfoCount;
  CommandBufferSubmitInfo *pCommandBufferInfos;
  uint32_t signalSemaphoreInfoCount;
  SemaphoreSubmitInfo *pSignalSemaphoreInfos;
};

struct QueueFamilyCheckpointProperties2NV {
  StructureType sType;
  void *pNext;
  PipelineStageMask2 checkpointExecutionStageMask;
};

struct CheckpointData2NV {
  StructureType sType;
  void *pNext;
  PipelineStageMask2 stage;
  void *pCheckpointMarker;
};

struct PhysicalDeviceSynchronization2Features {
  StructureType sType;
  void *pNext;
  VkBool32 synchronization2;
};

struct PhysicalDeviceHostImageCopyFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 hostImageCopy;
};

struct PhysicalDeviceHostImageCopyPropertiesEXT {
  StructureType sType;
  void *pNext;
  uint32_t copySrcLayoutCount;
  ImageLayout *pCopySrcLayouts;
  uint32_t copyDstLayoutCount;
  ImageLayout *pCopyDstLayouts;
  uint8_t optimalTilingLayoutUUID[VK_UUID_SIZE];
  VkBool32 identicalMemoryTypeRequirements;
};

struct MemoryToImageCopyEXT {
  StructureType sType;
  void *pNext;
  void *pHostPointer;
  uint32_t memoryRowLength;
  uint32_t memoryImageHeight;
  ImageSubresourceLayers imageSubresource;
  Offset3D imageOffset;
  Extent3D imageExtent;
};

struct ImageToMemoryCopyEXT {
  StructureType sType;
  void *pNext;
  void *pHostPointer;
  uint32_t memoryRowLength;
  uint32_t memoryImageHeight;
  ImageSubresourceLayers imageSubresource;
  Offset3D imageOffset;
  Extent3D imageExtent;
};

struct CopyMemoryToImageInfoEXT {
  StructureType sType;
  void *pNext;
  HostImageCopyMask flags;
  VkImage dstImage;
  ImageLayout dstImageLayout;
  uint32_t regionCount;
  MemoryToImageCopyEXT *pRegions;
};

struct CopyImageToMemoryInfoEXT {
  StructureType sType;
  void *pNext;
  HostImageCopyMask flags;
  VkImage srcImage;
  ImageLayout srcImageLayout;
  uint32_t regionCount;
  ImageToMemoryCopyEXT *pRegions;
};

struct CopyImageToImageInfoEXT {
  StructureType sType;
  void *pNext;
  HostImageCopyMask flags;
  VkImage srcImage;
  ImageLayout srcImageLayout;
  VkImage dstImage;
  ImageLayout dstImageLayout;
  uint32_t regionCount;
  ImageCopy2 *pRegions;
};

struct HostImageLayoutTransitionInfoEXT {
  StructureType sType;
  void *pNext;
  VkImage image;
  ImageLayout oldLayout;
  ImageLayout newLayout;
  ImageSubresourceRange subresourceRange;
};

struct SubresourceHostMemcpySizeEXT {
  StructureType sType;
  void *pNext;
  VkDeviceSize size;
};

struct HostImageCopyDevicePerformanceQueryEXT {
  StructureType sType;
  void *pNext;
  VkBool32 optimalDeviceAccess;
  VkBool32 identicalMemoryLayout;
};

struct PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 primitivesGeneratedQuery;
  VkBool32 primitivesGeneratedQueryWithRasterizerDiscard;
  VkBool32 primitivesGeneratedQueryWithNonZeroStreams;
};

struct PhysicalDeviceLegacyDitheringFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 legacyDithering;
};

struct PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 multisampledRenderToSingleSampled;
};

struct SubpassResolvePerformanceQueryEXT {
  StructureType sType;
  void *pNext;
  VkBool32 optimal;
};

struct MultisampledRenderToSingleSampledInfoEXT {
  StructureType sType;
  void *pNext;
  VkBool32 multisampledRenderToSingleSampledEnable;
  SampleCountMaskBits rasterizationSamples;
};

struct PhysicalDevicePipelineProtectedAccessFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 pipelineProtectedAccess;
};

struct QueueFamilyVideoPropertiesKHR {
  StructureType sType;
  void *pNext;
  VideoCodecOperationMask videoCodecOperations;
};

struct QueueFamilyQueryResultStatusPropertiesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 queryResultStatusSupport;
};

struct VideoProfileInfoKHR {
  StructureType sType;
  void *pNext;
  VideoCodecOperationMaskBits videoCodecOperation;
  VideoChromaSubsamplingMask chromaSubsampling;
  VideoComponentBitDepthMask lumaBitDepth;
  VideoComponentBitDepthMask chromaBitDepth;
};

struct VideoProfileListInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t profileCount;
  VideoProfileInfoKHR *pProfiles;
};

struct PhysicalDeviceVideoFormatInfoKHR {
  StructureType sType;
  void *pNext;
  ImageUsageMask imageUsage;
};

struct VideoFormatPropertiesKHR {
  StructureType sType;
  void *pNext;
  Format format;
  ComponentMapping componentMapping;
  ImageCreateMask imageCreateFlags;
  ImageType imageType;
  ImageTiling imageTiling;
  ImageUsageMask imageUsageFlags;
};

struct VideoCapabilitiesKHR {
  StructureType sType;
  void *pNext;
  VideoCapabilityMask flags;
  VkDeviceSize minBitstreamBufferOffsetAlignment;
  VkDeviceSize minBitstreamBufferSizeAlignment;
  Extent2D pictureAccessGranularity;
  Extent2D minCodedExtent;
  Extent2D maxCodedExtent;
  uint32_t maxDpbSlots;
  uint32_t maxActiveReferencePictures;
  ExtensionProperties stdHeaderVersion;
};

struct VideoSessionMemoryRequirementsKHR {
  StructureType sType;
  void *pNext;
  uint32_t memoryBindIndex;
  MemoryRequirements memoryRequirements;
};

struct BindVideoSessionMemoryInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t memoryBindIndex;
  VkDeviceMemory memory;
  VkDeviceSize memoryOffset;
  VkDeviceSize memorySize;
};

struct VideoPictureResourceInfoKHR {
  StructureType sType;
  void *pNext;
  Offset2D codedOffset;
  Extent2D codedExtent;
  uint32_t baseArrayLayer;
  VkImageView imageViewBinding;
};

struct VideoReferenceSlotInfoKHR {
  StructureType sType;
  void *pNext;
  int32_t slotIndex;
  VideoPictureResourceInfoKHR *pPictureResource;
};

struct VideoDecodeCapabilitiesKHR {
  StructureType sType;
  void *pNext;
  VideoDecodeCapabilityMask flags;
};

struct VideoDecodeUsageInfoKHR {
  StructureType sType;
  void *pNext;
  VideoDecodeUsageMask videoUsageHints;
};

struct VideoDecodeInfoKHR {
  StructureType sType;
  void *pNext;
  VideoDecodeMask flags;
  VkBuffer srcBuffer;
  VkDeviceSize srcBufferOffset;
  VkDeviceSize srcBufferRange;
  VideoPictureResourceInfoKHR dstPictureResource;
  VideoReferenceSlotInfoKHR *pSetupReferenceSlot;
  uint32_t referenceSlotCount;
  VideoReferenceSlotInfoKHR *pReferenceSlots;
};

struct PhysicalDeviceVideoMaintenance1FeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 videoMaintenance1;
};

struct VideoInlineQueryInfoKHR {
  StructureType sType;
  void *pNext;
  VkQueryPool queryPool;
  uint32_t firstQuery;
  uint32_t queryCount;
};

struct VideoDecodeH264ProfileInfoKHR {
  StructureType sType;
  void *pNext;
  StdVideoH264ProfileIdc stdProfileIdc;
  VideoDecodeH264PictureLayoutMaskBits pictureLayout;
};

struct VideoDecodeH264CapabilitiesKHR {
  StructureType sType;
  void *pNext;
  StdVideoH264LevelIdc maxLevelIdc;
  Offset2D fieldOffsetGranularity;
};

struct VideoDecodeH264SessionParametersAddInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t stdSPSCount;
  StdVideoH264SequenceParameterSet *pStdSPSs;
  uint32_t stdPPSCount;
  StdVideoH264PictureParameterSet *pStdPPSs;
};

struct VideoDecodeH264SessionParametersCreateInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t maxStdSPSCount;
  uint32_t maxStdPPSCount;
  VideoDecodeH264SessionParametersAddInfoKHR *pParametersAddInfo;
};

struct VideoDecodeH264PictureInfoKHR {
  StructureType sType;
  void *pNext;
  StdVideoDecodeH264PictureInfo *pStdPictureInfo;
  uint32_t sliceCount;
  uint32_t *pSliceOffsets;
};

struct VideoDecodeH264DpbSlotInfoKHR {
  StructureType sType;
  void *pNext;
  StdVideoDecodeH264ReferenceInfo *pStdReferenceInfo;
};

struct VideoDecodeH265ProfileInfoKHR {
  StructureType sType;
  void *pNext;
  StdVideoH265ProfileIdc stdProfileIdc;
};

struct VideoDecodeH265CapabilitiesKHR {
  StructureType sType;
  void *pNext;
  StdVideoH265LevelIdc maxLevelIdc;
};

struct VideoDecodeH265SessionParametersAddInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t stdVPSCount;
  StdVideoH265VideoParameterSet *pStdVPSs;
  uint32_t stdSPSCount;
  StdVideoH265SequenceParameterSet *pStdSPSs;
  uint32_t stdPPSCount;
  StdVideoH265PictureParameterSet *pStdPPSs;
};

struct VideoDecodeH265SessionParametersCreateInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t maxStdVPSCount;
  uint32_t maxStdSPSCount;
  uint32_t maxStdPPSCount;
  VideoDecodeH265SessionParametersAddInfoKHR *pParametersAddInfo;
};

struct VideoDecodeH265PictureInfoKHR {
  StructureType sType;
  void *pNext;
  StdVideoDecodeH265PictureInfo *pStdPictureInfo;
  uint32_t sliceSegmentCount;
  uint32_t *pSliceSegmentOffsets;
};

struct VideoDecodeH265DpbSlotInfoKHR {
  StructureType sType;
  void *pNext;
  StdVideoDecodeH265ReferenceInfo *pStdReferenceInfo;
};

struct VideoDecodeAV1ProfileInfoKHR {
  StructureType sType;
  void *pNext;
  StdVideoAV1Profile stdProfile;
  VkBool32 filmGrainSupport;
};

struct VideoDecodeAV1CapabilitiesKHR {
  StructureType sType;
  void *pNext;
  StdVideoAV1Level maxLevel;
};

struct VideoDecodeAV1SessionParametersCreateInfoKHR {
  StructureType sType;
  void *pNext;
  StdVideoAV1SequenceHeader *pStdSequenceHeader;
};

struct VideoDecodeAV1PictureInfoKHR {
  StructureType sType;
  void *pNext;
  StdVideoDecodeAV1PictureInfo *pStdPictureInfo;
  int32_t referenceNameSlotIndices[VK_MAX_VIDEO_AV1_REFERENCES_PER_FRAME_KHR];
  uint32_t frameHeaderOffset;
  uint32_t tileCount;
  uint32_t *pTileOffsets;
  uint32_t *pTileSizes;
};

struct VideoDecodeAV1DpbSlotInfoKHR {
  StructureType sType;
  void *pNext;
  StdVideoDecodeAV1ReferenceInfo *pStdReferenceInfo;
};

struct VideoSessionCreateInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t queueFamilyIndex;
  VideoSessionCreateMask flags;
  VideoProfileInfoKHR *pVideoProfile;
  Format pictureFormat;
  Extent2D maxCodedExtent;
  Format referencePictureFormat;
  uint32_t maxDpbSlots;
  uint32_t maxActiveReferencePictures;
  ExtensionProperties *pStdHeaderVersion;
};

struct VideoSessionParametersCreateInfoKHR {
  StructureType sType;
  void *pNext;
  VideoSessionParametersCreateMask flags;
  VkVideoSessionParametersKHR videoSessionParametersTemplate;
  VkVideoSessionKHR videoSession;
};

struct VideoSessionParametersUpdateInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t updateSequenceCount;
};

struct VideoEncodeSessionParametersGetInfoKHR {
  StructureType sType;
  void *pNext;
  VkVideoSessionParametersKHR videoSessionParameters;
};

struct VideoEncodeSessionParametersFeedbackInfoKHR {
  StructureType sType;
  void *pNext;
  VkBool32 hasOverrides;
};

struct VideoBeginCodingInfoKHR {
  StructureType sType;
  void *pNext;
  VideoBeginCodingMask flags;
  VkVideoSessionKHR videoSession;
  VkVideoSessionParametersKHR videoSessionParameters;
  uint32_t referenceSlotCount;
  VideoReferenceSlotInfoKHR *pReferenceSlots;
};

struct VideoEndCodingInfoKHR {
  StructureType sType;
  void *pNext;
  VideoEndCodingMask flags;
};

struct VideoCodingControlInfoKHR {
  StructureType sType;
  void *pNext;
  VideoCodingControlMask flags;
};

struct VideoEncodeUsageInfoKHR {
  StructureType sType;
  void *pNext;
  VideoEncodeUsageMask videoUsageHints;
  VideoEncodeContentMask videoContentHints;
  VideoEncodeTuningMode tuningMode;
};

struct VideoEncodeInfoKHR {
  StructureType sType;
  void *pNext;
  VideoEncodeMask flags;
  VkBuffer dstBuffer;
  VkDeviceSize dstBufferOffset;
  VkDeviceSize dstBufferRange;
  VideoPictureResourceInfoKHR srcPictureResource;
  VideoReferenceSlotInfoKHR *pSetupReferenceSlot;
  uint32_t referenceSlotCount;
  VideoReferenceSlotInfoKHR *pReferenceSlots;
  uint32_t precedingExternallyEncodedBytes;
};

struct QueryPoolVideoEncodeFeedbackCreateInfoKHR {
  StructureType sType;
  void *pNext;
  VideoEncodeFeedbackMask encodeFeedbackFlags;
};

struct VideoEncodeQualityLevelInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t qualityLevel;
};

struct PhysicalDeviceVideoEncodeQualityLevelInfoKHR {
  StructureType sType;
  void *pNext;
  VideoProfileInfoKHR *pVideoProfile;
  uint32_t qualityLevel;
};

struct VideoEncodeQualityLevelPropertiesKHR {
  StructureType sType;
  void *pNext;
  VideoEncodeRateControlModeMaskBits preferredRateControlMode;
  uint32_t preferredRateControlLayerCount;
};

struct VideoEncodeRateControlLayerInfoKHR {
  StructureType sType;
  void *pNext;
  uint64_t averageBitrate;
  uint64_t maxBitrate;
  uint32_t frameRateNumerator;
  uint32_t frameRateDenominator;
};

struct VideoEncodeRateControlInfoKHR {
  StructureType sType;
  void *pNext;
  VideoEncodeRateControlMask flags;
  VideoEncodeRateControlModeMaskBits rateControlMode;
  uint32_t layerCount;
  VideoEncodeRateControlLayerInfoKHR *pLayers;
  uint32_t virtualBufferSizeInMs;
  uint32_t initialVirtualBufferSizeInMs;
};

struct VideoEncodeCapabilitiesKHR {
  StructureType sType;
  void *pNext;
  VideoEncodeCapabilityMask flags;
  VideoEncodeRateControlModeMask rateControlModes;
  uint32_t maxRateControlLayers;
  uint64_t maxBitrate;
  uint32_t maxQualityLevels;
  Extent2D encodeInputPictureGranularity;
  VideoEncodeFeedbackMask supportedEncodeFeedbackFlags;
};

struct VideoEncodeH264CapabilitiesKHR {
  StructureType sType;
  void *pNext;
  VideoEncodeH264CapabilityMask flags;
  StdVideoH264LevelIdc maxLevelIdc;
  uint32_t maxSliceCount;
  uint32_t maxPPictureL0ReferenceCount;
  uint32_t maxBPictureL0ReferenceCount;
  uint32_t maxL1ReferenceCount;
  uint32_t maxTemporalLayerCount;
  VkBool32 expectDyadicTemporalLayerPattern;
  int32_t minQp;
  int32_t maxQp;
  VkBool32 prefersGopRemainingFrames;
  VkBool32 requiresGopRemainingFrames;
  VideoEncodeH264StdMask stdSyntaxFlags;
};

struct VideoEncodeH264QpKHR {
  int32_t qpI;
  int32_t qpP;
  int32_t qpB;
};

struct VideoEncodeH264QualityLevelPropertiesKHR {
  StructureType sType;
  void *pNext;
  VideoEncodeH264RateControlMask preferredRateControlFlags;
  uint32_t preferredGopFrameCount;
  uint32_t preferredIdrPeriod;
  uint32_t preferredConsecutiveBFrameCount;
  uint32_t preferredTemporalLayerCount;
  VideoEncodeH264QpKHR preferredConstantQp;
  uint32_t preferredMaxL0ReferenceCount;
  uint32_t preferredMaxL1ReferenceCount;
  VkBool32 preferredStdEntropyCodingModeFlag;
};

struct VideoEncodeH264SessionCreateInfoKHR {
  StructureType sType;
  void *pNext;
  VkBool32 useMaxLevelIdc;
  StdVideoH264LevelIdc maxLevelIdc;
};

struct VideoEncodeH264SessionParametersAddInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t stdSPSCount;
  StdVideoH264SequenceParameterSet *pStdSPSs;
  uint32_t stdPPSCount;
  StdVideoH264PictureParameterSet *pStdPPSs;
};

struct VideoEncodeH264SessionParametersCreateInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t maxStdSPSCount;
  uint32_t maxStdPPSCount;
  VideoEncodeH264SessionParametersAddInfoKHR *pParametersAddInfo;
};

struct VideoEncodeH264SessionParametersGetInfoKHR {
  StructureType sType;
  void *pNext;
  VkBool32 writeStdSPS;
  VkBool32 writeStdPPS;
  uint32_t stdSPSId;
  uint32_t stdPPSId;
};

struct VideoEncodeH264SessionParametersFeedbackInfoKHR {
  StructureType sType;
  void *pNext;
  VkBool32 hasStdSPSOverrides;
  VkBool32 hasStdPPSOverrides;
};

struct VideoEncodeH264DpbSlotInfoKHR {
  StructureType sType;
  void *pNext;
  StdVideoEncodeH264ReferenceInfo *pStdReferenceInfo;
};

struct VideoEncodeH264NaluSliceInfoKHR {
  StructureType sType;
  void *pNext;
  int32_t constantQp;
  StdVideoEncodeH264SliceHeader *pStdSliceHeader;
};

struct VideoEncodeH264PictureInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t naluSliceEntryCount;
  VideoEncodeH264NaluSliceInfoKHR *pNaluSliceEntries;
  StdVideoEncodeH264PictureInfo *pStdPictureInfo;
  VkBool32 generatePrefixNalu;
};

struct VideoEncodeH264ProfileInfoKHR {
  StructureType sType;
  void *pNext;
  StdVideoH264ProfileIdc stdProfileIdc;
};

struct VideoEncodeH264RateControlInfoKHR {
  StructureType sType;
  void *pNext;
  VideoEncodeH264RateControlMask flags;
  uint32_t gopFrameCount;
  uint32_t idrPeriod;
  uint32_t consecutiveBFrameCount;
  uint32_t temporalLayerCount;
};

struct VideoEncodeH264FrameSizeKHR {
  uint32_t frameISize;
  uint32_t framePSize;
  uint32_t frameBSize;
};

struct VideoEncodeH264GopRemainingFrameInfoKHR {
  StructureType sType;
  void *pNext;
  VkBool32 useGopRemainingFrames;
  uint32_t gopRemainingI;
  uint32_t gopRemainingP;
  uint32_t gopRemainingB;
};

struct VideoEncodeH264RateControlLayerInfoKHR {
  StructureType sType;
  void *pNext;
  VkBool32 useMinQp;
  VideoEncodeH264QpKHR minQp;
  VkBool32 useMaxQp;
  VideoEncodeH264QpKHR maxQp;
  VkBool32 useMaxFrameSize;
  VideoEncodeH264FrameSizeKHR maxFrameSize;
};

struct VideoEncodeH265CapabilitiesKHR {
  StructureType sType;
  void *pNext;
  VideoEncodeH265CapabilityMask flags;
  StdVideoH265LevelIdc maxLevelIdc;
  uint32_t maxSliceSegmentCount;
  Extent2D maxTiles;
  VideoEncodeH265CtbSizeMask ctbSizes;
  VideoEncodeH265TransformBlockSizeMask transformBlockSizes;
  uint32_t maxPPictureL0ReferenceCount;
  uint32_t maxBPictureL0ReferenceCount;
  uint32_t maxL1ReferenceCount;
  uint32_t maxSubLayerCount;
  VkBool32 expectDyadicTemporalSubLayerPattern;
  int32_t minQp;
  int32_t maxQp;
  VkBool32 prefersGopRemainingFrames;
  VkBool32 requiresGopRemainingFrames;
  VideoEncodeH265StdMask stdSyntaxFlags;
};

struct VideoEncodeH265QpKHR {
  int32_t qpI;
  int32_t qpP;
  int32_t qpB;
};

struct VideoEncodeH265QualityLevelPropertiesKHR {
  StructureType sType;
  void *pNext;
  VideoEncodeH265RateControlMask preferredRateControlFlags;
  uint32_t preferredGopFrameCount;
  uint32_t preferredIdrPeriod;
  uint32_t preferredConsecutiveBFrameCount;
  uint32_t preferredSubLayerCount;
  VideoEncodeH265QpKHR preferredConstantQp;
  uint32_t preferredMaxL0ReferenceCount;
  uint32_t preferredMaxL1ReferenceCount;
};

struct VideoEncodeH265SessionCreateInfoKHR {
  StructureType sType;
  void *pNext;
  VkBool32 useMaxLevelIdc;
  StdVideoH265LevelIdc maxLevelIdc;
};

struct VideoEncodeH265SessionParametersAddInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t stdVPSCount;
  StdVideoH265VideoParameterSet *pStdVPSs;
  uint32_t stdSPSCount;
  StdVideoH265SequenceParameterSet *pStdSPSs;
  uint32_t stdPPSCount;
  StdVideoH265PictureParameterSet *pStdPPSs;
};

struct VideoEncodeH265SessionParametersCreateInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t maxStdVPSCount;
  uint32_t maxStdSPSCount;
  uint32_t maxStdPPSCount;
  VideoEncodeH265SessionParametersAddInfoKHR *pParametersAddInfo;
};

struct VideoEncodeH265SessionParametersGetInfoKHR {
  StructureType sType;
  void *pNext;
  VkBool32 writeStdVPS;
  VkBool32 writeStdSPS;
  VkBool32 writeStdPPS;
  uint32_t stdVPSId;
  uint32_t stdSPSId;
  uint32_t stdPPSId;
};

struct VideoEncodeH265SessionParametersFeedbackInfoKHR {
  StructureType sType;
  void *pNext;
  VkBool32 hasStdVPSOverrides;
  VkBool32 hasStdSPSOverrides;
  VkBool32 hasStdPPSOverrides;
};

struct VideoEncodeH265NaluSliceSegmentInfoKHR {
  StructureType sType;
  void *pNext;
  int32_t constantQp;
  StdVideoEncodeH265SliceSegmentHeader *pStdSliceSegmentHeader;
};

struct VideoEncodeH265PictureInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t naluSliceSegmentEntryCount;
  VideoEncodeH265NaluSliceSegmentInfoKHR *pNaluSliceSegmentEntries;
  StdVideoEncodeH265PictureInfo *pStdPictureInfo;
};

struct VideoEncodeH265RateControlInfoKHR {
  StructureType sType;
  void *pNext;
  VideoEncodeH265RateControlMask flags;
  uint32_t gopFrameCount;
  uint32_t idrPeriod;
  uint32_t consecutiveBFrameCount;
  uint32_t subLayerCount;
};

struct VideoEncodeH265FrameSizeKHR {
  uint32_t frameISize;
  uint32_t framePSize;
  uint32_t frameBSize;
};

struct VideoEncodeH265GopRemainingFrameInfoKHR {
  StructureType sType;
  void *pNext;
  VkBool32 useGopRemainingFrames;
  uint32_t gopRemainingI;
  uint32_t gopRemainingP;
  uint32_t gopRemainingB;
};

struct VideoEncodeH265RateControlLayerInfoKHR {
  StructureType sType;
  void *pNext;
  VkBool32 useMinQp;
  VideoEncodeH265QpKHR minQp;
  VkBool32 useMaxQp;
  VideoEncodeH265QpKHR maxQp;
  VkBool32 useMaxFrameSize;
  VideoEncodeH265FrameSizeKHR maxFrameSize;
};

struct VideoEncodeH265ProfileInfoKHR {
  StructureType sType;
  void *pNext;
  StdVideoH265ProfileIdc stdProfileIdc;
};

struct VideoEncodeH265DpbSlotInfoKHR {
  StructureType sType;
  void *pNext;
  StdVideoEncodeH265ReferenceInfo *pStdReferenceInfo;
};

struct PhysicalDeviceInheritedViewportScissorFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 inheritedViewportScissor2D;
};

struct CommandBufferInheritanceViewportScissorInfoNV {
  StructureType sType;
  void *pNext;
  VkBool32 viewportScissor2D;
  uint32_t viewportDepthCount;
  Viewport *pViewportDepths;
};

struct PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 ycbcr2plane444Formats;
};

struct PhysicalDeviceProvokingVertexFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 provokingVertexLast;
  VkBool32 transformFeedbackPreservesProvokingVertex;
};

struct PhysicalDeviceProvokingVertexPropertiesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 provokingVertexModePerPipeline;
  VkBool32 transformFeedbackPreservesTriangleFanProvokingVertex;
};

struct PipelineRasterizationProvokingVertexStateCreateInfoEXT {
  StructureType sType;
  void *pNext;
  ProvokingVertexMode provokingVertexMode;
};

struct CuModuleCreateInfoNVX {
  StructureType sType;
  void *pNext;
  size_t dataSize;
  void *pData;
};

struct CuFunctionCreateInfoNVX {
  StructureType sType;
  void *pNext;
  VkCuModuleNVX module;
  char *pName;
};

struct CuLaunchInfoNVX {
  StructureType sType;
  void *pNext;
  VkCuFunctionNVX function;
  uint32_t gridDimX;
  uint32_t gridDimY;
  uint32_t gridDimZ;
  uint32_t blockDimX;
  uint32_t blockDimY;
  uint32_t blockDimZ;
  uint32_t sharedMemBytes;
  size_t paramCount;
  void *const *pParams;
  size_t extraCount;
  void *const *pExtras;
};

struct PhysicalDeviceDescriptorBufferFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 descriptorBuffer;
  VkBool32 descriptorBufferCaptureReplay;
  VkBool32 descriptorBufferImageLayoutIgnored;
  VkBool32 descriptorBufferPushDescriptors;
};

struct PhysicalDeviceDescriptorBufferPropertiesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 combinedImageSamplerDescriptorSingleArray;
  VkBool32 bufferlessPushDescriptors;
  VkBool32 allowSamplerImageViewPostSubmitCreation;
  VkDeviceSize descriptorBufferOffsetAlignment;
  uint32_t maxDescriptorBufferBindings;
  uint32_t maxResourceDescriptorBufferBindings;
  uint32_t maxSamplerDescriptorBufferBindings;
  uint32_t maxEmbeddedImmutableSamplerBindings;
  uint32_t maxEmbeddedImmutableSamplers;
  size_t bufferCaptureReplayDescriptorDataSize;
  size_t imageCaptureReplayDescriptorDataSize;
  size_t imageViewCaptureReplayDescriptorDataSize;
  size_t samplerCaptureReplayDescriptorDataSize;
  size_t accelerationStructureCaptureReplayDescriptorDataSize;
  size_t samplerDescriptorSize;
  size_t combinedImageSamplerDescriptorSize;
  size_t sampledImageDescriptorSize;
  size_t storageImageDescriptorSize;
  size_t uniformTexelBufferDescriptorSize;
  size_t robustUniformTexelBufferDescriptorSize;
  size_t storageTexelBufferDescriptorSize;
  size_t robustStorageTexelBufferDescriptorSize;
  size_t uniformBufferDescriptorSize;
  size_t robustUniformBufferDescriptorSize;
  size_t storageBufferDescriptorSize;
  size_t robustStorageBufferDescriptorSize;
  size_t inputAttachmentDescriptorSize;
  size_t accelerationStructureDescriptorSize;
  VkDeviceSize maxSamplerDescriptorBufferRange;
  VkDeviceSize maxResourceDescriptorBufferRange;
  VkDeviceSize samplerDescriptorBufferAddressSpaceSize;
  VkDeviceSize resourceDescriptorBufferAddressSpaceSize;
  VkDeviceSize descriptorBufferAddressSpaceSize;
};

struct PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT {
  StructureType sType;
  void *pNext;
  size_t combinedImageSamplerDensityMapDescriptorSize;
};

struct DescriptorAddressInfoEXT {
  StructureType sType;
  void *pNext;
  VkDeviceAddress address;
  VkDeviceSize range;
  Format format;
};

struct DescriptorBufferBindingInfoEXT {
  StructureType sType;
  void *pNext;
  VkDeviceAddress address;
  BufferUsageMask usage;
};

struct DescriptorBufferBindingPushDescriptorBufferHandleEXT {
  StructureType sType;
  void *pNext;
  VkBuffer buffer;
};

struct DescriptorGetInfoEXT {
  StructureType sType;
  void *pNext;
  DescriptorType type;
  VkDescriptorDataEXT data;
};

struct BufferCaptureDescriptorDataInfoEXT {
  StructureType sType;
  void *pNext;
  VkBuffer buffer;
};

struct ImageCaptureDescriptorDataInfoEXT {
  StructureType sType;
  void *pNext;
  VkImage image;
};

struct ImageViewCaptureDescriptorDataInfoEXT {
  StructureType sType;
  void *pNext;
  VkImageView imageView;
};

struct SamplerCaptureDescriptorDataInfoEXT {
  StructureType sType;
  void *pNext;
  VkSampler sampler;
};

struct AccelerationStructureCaptureDescriptorDataInfoEXT {
  StructureType sType;
  void *pNext;
  VkAccelerationStructureKHR accelerationStructure;
  VkAccelerationStructureNV accelerationStructureNV;
};

struct OpaqueCaptureDescriptorDataCreateInfoEXT {
  StructureType sType;
  void *pNext;
  void *opaqueCaptureDescriptorData;
};

struct PhysicalDeviceShaderIntegerDotProductFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 shaderIntegerDotProduct;
};

struct PhysicalDeviceShaderIntegerDotProductProperties {
  StructureType sType;
  void *pNext;
  VkBool32 integerDotProduct8BitUnsignedAccelerated;
  VkBool32 integerDotProduct8BitSignedAccelerated;
  VkBool32 integerDotProduct8BitMixedSignednessAccelerated;
  VkBool32 integerDotProduct4x8BitPackedUnsignedAccelerated;
  VkBool32 integerDotProduct4x8BitPackedSignedAccelerated;
  VkBool32 integerDotProduct4x8BitPackedMixedSignednessAccelerated;
  VkBool32 integerDotProduct16BitUnsignedAccelerated;
  VkBool32 integerDotProduct16BitSignedAccelerated;
  VkBool32 integerDotProduct16BitMixedSignednessAccelerated;
  VkBool32 integerDotProduct32BitUnsignedAccelerated;
  VkBool32 integerDotProduct32BitSignedAccelerated;
  VkBool32 integerDotProduct32BitMixedSignednessAccelerated;
  VkBool32 integerDotProduct64BitUnsignedAccelerated;
  VkBool32 integerDotProduct64BitSignedAccelerated;
  VkBool32 integerDotProduct64BitMixedSignednessAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating8BitSignedAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating16BitSignedAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating32BitSignedAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating64BitSignedAccelerated;
  VkBool32 integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
};

struct PhysicalDeviceDrmPropertiesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 hasPrimary;
  VkBool32 hasRender;
  int64_t primaryMajor;
  int64_t primaryMinor;
  int64_t renderMajor;
  int64_t renderMinor;
};

struct PhysicalDeviceFragmentShaderBarycentricFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 fragmentShaderBarycentric;
};

struct PhysicalDeviceFragmentShaderBarycentricPropertiesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 triStripVertexOrderIndependentOfProvokingVertex;
};

struct PhysicalDeviceRayTracingMotionBlurFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 rayTracingMotionBlur;
  VkBool32 rayTracingMotionBlurPipelineTraceRaysIndirect;
};

struct PhysicalDeviceRayTracingValidationFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 rayTracingValidation;
};

struct AccelerationStructureGeometryMotionTrianglesDataNV {
  StructureType sType;
  void *pNext;
  VkDeviceOrHostAddressConstKHR vertexData;
};

struct AccelerationStructureMotionInfoNV {
  StructureType sType;
  void *pNext;
  uint32_t maxInstances;
  AccelerationStructureMotionInfoMask flags;
};

struct SRTDataNV {
  float sx;
  float a;
  float b;
  float pvx;
  float sy;
  float c;
  float pvy;
  float sz;
  float pvz;
  float qx;
  float qy;
  float qz;
  float qw;
  float tx;
  float ty;
  float tz;
};

struct AccelerationStructureSRTMotionInstanceNV {
  SRTDataNV transformT0;
  SRTDataNV transformT1;
  uint32_t instanceCustomIndex : 24;
  uint32_t mask : 8;
  uint32_t instanceShaderBindingTableRecordOffset : 24;
  VkGeometryInstanceFlagsKHR flags : 8;
  uint64_t accelerationStructureReference;
};

struct AccelerationStructureMatrixMotionInstanceNV {
  TransformMatrixKHR transformT0;
  TransformMatrixKHR transformT1;
  uint32_t instanceCustomIndex : 24;
  uint32_t mask : 8;
  uint32_t instanceShaderBindingTableRecordOffset : 24;
  VkGeometryInstanceFlagsKHR flags : 8;
  uint64_t accelerationStructureReference;
};

struct AccelerationStructureMotionInstanceNV {
  AccelerationStructureMotionInstanceType type;
  AccelerationStructureMotionInstanceMask flags;
  VkAccelerationStructureMotionInstanceDataNV data;
};

struct MemoryGetRemoteAddressInfoNV {
  StructureType sType;
  void *pNext;
  VkDeviceMemory memory;
  ExternalMemoryHandleTypeMaskBits handleType;
};

struct CudaModuleCreateInfoNV {
  StructureType sType;
  void *pNext;
  size_t dataSize;
  void *pData;
};

struct CudaFunctionCreateInfoNV {
  StructureType sType;
  void *pNext;
  VkCudaModuleNV module;
  char *pName;
};

struct CudaLaunchInfoNV {
  StructureType sType;
  void *pNext;
  VkCudaFunctionNV function;
  uint32_t gridDimX;
  uint32_t gridDimY;
  uint32_t gridDimZ;
  uint32_t blockDimX;
  uint32_t blockDimY;
  uint32_t blockDimZ;
  uint32_t sharedMemBytes;
  size_t paramCount;
  void *const *pParams;
  size_t extraCount;
  void *const *pExtras;
};

struct PhysicalDeviceRGBA10X6FormatsFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 formatRgba10x6WithoutYCbCrSampler;
};

struct FormatProperties3 {
  StructureType sType;
  void *pNext;
  FormatFeatureMask2 linearTilingFeatures;
  FormatFeatureMask2 optimalTilingFeatures;
  FormatFeatureMask2 bufferFeatures;
};

struct DrmFormatModifierProperties2EXT {
  uint64_t drmFormatModifier;
  uint32_t drmFormatModifierPlaneCount;
  FormatFeatureMask2 drmFormatModifierTilingFeatures;
};

struct DrmFormatModifierPropertiesList2EXT {
  StructureType sType;
  void *pNext;
  uint32_t drmFormatModifierCount;
  DrmFormatModifierProperties2EXT *pDrmFormatModifierProperties;
};

struct PipelineRenderingCreateInfo {
  StructureType sType;
  void *pNext;
  uint32_t viewMask;
  uint32_t colorAttachmentCount;
  Format *pColorAttachmentFormats;
  Format depthAttachmentFormat;
  Format stencilAttachmentFormat;
};

struct RenderingAttachmentInfo {
  StructureType sType;
  void *pNext;
  VkImageView imageView;
  ImageLayout imageLayout;
  ResolveModeMaskBits resolveMode;
  VkImageView resolveImageView;
  ImageLayout resolveImageLayout;
  AttachmentLoadOp loadOp;
  AttachmentStoreOp storeOp;
  VkClearValue clearValue;
};

struct RenderingInfo {
  StructureType sType;
  void *pNext;
  RenderingMask flags;
  Rect2D renderArea;
  uint32_t layerCount;
  uint32_t viewMask;
  uint32_t colorAttachmentCount;
  RenderingAttachmentInfo *pColorAttachments;
  RenderingAttachmentInfo *pDepthAttachment;
  RenderingAttachmentInfo *pStencilAttachment;
};

struct RenderingFragmentShadingRateAttachmentInfoKHR {
  StructureType sType;
  void *pNext;
  VkImageView imageView;
  ImageLayout imageLayout;
  Extent2D shadingRateAttachmentTexelSize;
};

struct RenderingFragmentDensityMapAttachmentInfoEXT {
  StructureType sType;
  void *pNext;
  VkImageView imageView;
  ImageLayout imageLayout;
};

struct PhysicalDeviceDynamicRenderingFeatures {
  StructureType sType;
  void *pNext;
  VkBool32 dynamicRendering;
};

struct CommandBufferInheritanceRenderingInfo {
  StructureType sType;
  void *pNext;
  RenderingMask flags;
  uint32_t viewMask;
  uint32_t colorAttachmentCount;
  Format *pColorAttachmentFormats;
  Format depthAttachmentFormat;
  Format stencilAttachmentFormat;
  SampleCountMaskBits rasterizationSamples;
};

struct AttachmentSampleCountInfoAMD {
  StructureType sType;
  void *pNext;
  uint32_t colorAttachmentCount;
  SampleCountMaskBits *pColorAttachmentSamples;
  SampleCountMaskBits depthStencilAttachmentSamples;
};

struct MultiviewPerViewAttributesInfoNVX {
  StructureType sType;
  void *pNext;
  VkBool32 perViewAttributes;
  VkBool32 perViewAttributesPositionXOnly;
};

struct PhysicalDeviceImageViewMinLodFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 minLod;
};

struct ImageViewMinLodCreateInfoEXT {
  StructureType sType;
  void *pNext;
  float minLod;
};

struct PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 rasterizationOrderColorAttachmentAccess;
  VkBool32 rasterizationOrderDepthAttachmentAccess;
  VkBool32 rasterizationOrderStencilAttachmentAccess;
};

struct PhysicalDeviceLinearColorAttachmentFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 linearColorAttachment;
};

struct PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 graphicsPipelineLibrary;
};

struct PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 graphicsPipelineLibraryFastLinking;
  VkBool32 graphicsPipelineLibraryIndependentInterpolationDecoration;
};

struct GraphicsPipelineLibraryCreateInfoEXT {
  StructureType sType;
  void *pNext;
  GraphicsPipelineLibraryMask flags;
};

struct PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE {
  StructureType sType;
  void *pNext;
  VkBool32 descriptorSetHostMapping;
};

struct DescriptorSetBindingReferenceVALVE {
  StructureType sType;
  void *pNext;
  VkDescriptorSetLayout descriptorSetLayout;
  uint32_t binding;
};

struct DescriptorSetLayoutHostMappingInfoVALVE {
  StructureType sType;
  void *pNext;
  size_t descriptorOffset;
  uint32_t descriptorSize;
};

struct PhysicalDeviceNestedCommandBufferFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 nestedCommandBuffer;
  VkBool32 nestedCommandBufferRendering;
  VkBool32 nestedCommandBufferSimultaneousUse;
};

struct PhysicalDeviceNestedCommandBufferPropertiesEXT {
  StructureType sType;
  void *pNext;
  uint32_t maxCommandBufferNestingLevel;
};

struct PhysicalDeviceShaderModuleIdentifierFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 shaderModuleIdentifier;
};

struct PhysicalDeviceShaderModuleIdentifierPropertiesEXT {
  StructureType sType;
  void *pNext;
  uint8_t shaderModuleIdentifierAlgorithmUUID[VK_UUID_SIZE];
};

struct PipelineShaderStageModuleIdentifierCreateInfoEXT {
  StructureType sType;
  void *pNext;
  uint32_t identifierSize;
  uint8_t *pIdentifier;
};

struct ShaderModuleIdentifierEXT {
  StructureType sType;
  void *pNext;
  uint32_t identifierSize;
  uint8_t identifier[VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT];
};

struct ImageCompressionControlEXT {
  StructureType sType;
  void *pNext;
  ImageCompressionMask flags;
  uint32_t compressionControlPlaneCount;
  ImageCompressionFixedRateMask *pFixedRateFlags;
};

struct PhysicalDeviceImageCompressionControlFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 imageCompressionControl;
};

struct ImageCompressionPropertiesEXT {
  StructureType sType;
  void *pNext;
  ImageCompressionMask imageCompressionFlags;
  ImageCompressionFixedRateMask imageCompressionFixedRateFlags;
};

struct PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 imageCompressionControlSwapchain;
};

struct ImageSubresource2KHR {
  StructureType sType;
  void *pNext;
  ImageSubresource imageSubresource;
};

struct SubresourceLayout2KHR {
  StructureType sType;
  void *pNext;
  SubresourceLayout subresourceLayout;
};

struct RenderPassCreationControlEXT {
  StructureType sType;
  void *pNext;
  VkBool32 disallowMerging;
};

struct RenderPassCreationFeedbackInfoEXT {
  uint32_t postMergeSubpassCount;
};

struct RenderPassCreationFeedbackCreateInfoEXT {
  StructureType sType;
  void *pNext;
  RenderPassCreationFeedbackInfoEXT *pRenderPassFeedback;
};

struct RenderPassSubpassFeedbackInfoEXT {
  SubpassMergeStatus subpassMergeStatus;
  char description[VK_MAX_DESCRIPTION_SIZE];
  uint32_t postMergeIndex;
};

struct RenderPassSubpassFeedbackCreateInfoEXT {
  StructureType sType;
  void *pNext;
  RenderPassSubpassFeedbackInfoEXT *pSubpassFeedback;
};

struct PhysicalDeviceSubpassMergeFeedbackFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 subpassMergeFeedback;
};

struct MicromapUsageEXT {
  uint32_t count;
  uint32_t subdivisionLevel;
  uint32_t format;
};

struct MicromapBuildInfoEXT {
  StructureType sType;
  void *pNext;
  MicromapType type;
  BuildMicromapMask flags;
  BuildMicromapMode mode;
  VkMicromapEXT dstMicromap;
  uint32_t usageCountsCount;
  MicromapUsageEXT *pUsageCounts;
  MicromapUsageEXT *const *ppUsageCounts;
  VkDeviceOrHostAddressConstKHR data;
  VkDeviceOrHostAddressKHR scratchData;
  VkDeviceOrHostAddressConstKHR triangleArray;
  VkDeviceSize triangleArrayStride;
};

struct MicromapCreateInfoEXT {
  StructureType sType;
  void *pNext;
  MicromapCreateMask createFlags;
  VkBuffer buffer;
  VkDeviceSize offset;
  VkDeviceSize size;
  MicromapType type;
  VkDeviceAddress deviceAddress;
};

struct MicromapVersionInfoEXT {
  StructureType sType;
  void *pNext;
  uint8_t *pVersionData;
};

struct CopyMicromapInfoEXT {
  StructureType sType;
  void *pNext;
  VkMicromapEXT src;
  VkMicromapEXT dst;
  CopyMicromapMode mode;
};

struct CopyMicromapToMemoryInfoEXT {
  StructureType sType;
  void *pNext;
  VkMicromapEXT src;
  VkDeviceOrHostAddressKHR dst;
  CopyMicromapMode mode;
};

struct CopyMemoryToMicromapInfoEXT {
  StructureType sType;
  void *pNext;
  VkDeviceOrHostAddressConstKHR src;
  VkMicromapEXT dst;
  CopyMicromapMode mode;
};

struct MicromapBuildSizesInfoEXT {
  StructureType sType;
  void *pNext;
  VkDeviceSize micromapSize;
  VkDeviceSize buildScratchSize;
  VkBool32 discardable;
};

struct MicromapTriangleEXT {
  uint32_t dataOffset;
  uint16_t subdivisionLevel;
  uint16_t format;
};

struct PhysicalDeviceOpacityMicromapFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 micromap;
  VkBool32 micromapCaptureReplay;
  VkBool32 micromapHostCommands;
};

struct PhysicalDeviceOpacityMicromapPropertiesEXT {
  StructureType sType;
  void *pNext;
  uint32_t maxOpacity2StateSubdivisionLevel;
  uint32_t maxOpacity4StateSubdivisionLevel;
};

struct AccelerationStructureTrianglesOpacityMicromapEXT {
  StructureType sType;
  void *pNext;
  IndexType indexType;
  VkDeviceOrHostAddressConstKHR indexBuffer;
  VkDeviceSize indexStride;
  uint32_t baseTriangle;
  uint32_t usageCountsCount;
  MicromapUsageEXT *pUsageCounts;
  MicromapUsageEXT *const *ppUsageCounts;
  VkMicromapEXT micromap;
};

struct PipelinePropertiesIdentifierEXT {
  StructureType sType;
  void *pNext;
  uint8_t pipelineIdentifier[VK_UUID_SIZE];
};

struct PhysicalDevicePipelinePropertiesFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 pipelinePropertiesIdentifier;
};

struct PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD {
  StructureType sType;
  void *pNext;
  VkBool32 shaderEarlyAndLateFragmentTests;
};

struct ExternalMemoryAcquireUnmodifiedEXT {
  StructureType sType;
  void *pNext;
  VkBool32 acquireUnmodifiedMemory;
};

struct PhysicalDeviceNonSeamlessCubeMapFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 nonSeamlessCubeMap;
};

struct PhysicalDevicePipelineRobustnessFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 pipelineRobustness;
};

struct PipelineRobustnessCreateInfoEXT {
  StructureType sType;
  void *pNext;
  PipelineRobustnessBufferBehavior storageBuffers;
  PipelineRobustnessBufferBehavior uniformBuffers;
  PipelineRobustnessBufferBehavior vertexInputs;
  PipelineRobustnessImageBehavior images;
};

struct PhysicalDevicePipelineRobustnessPropertiesEXT {
  StructureType sType;
  void *pNext;
  PipelineRobustnessBufferBehavior defaultRobustnessStorageBuffers;
  PipelineRobustnessBufferBehavior defaultRobustnessUniformBuffers;
  PipelineRobustnessBufferBehavior defaultRobustnessVertexInputs;
  PipelineRobustnessImageBehavior defaultRobustnessImages;
};

struct ImageViewSampleWeightCreateInfoQCOM {
  StructureType sType;
  void *pNext;
  Offset2D filterCenter;
  Extent2D filterSize;
  uint32_t numPhases;
};

struct PhysicalDeviceImageProcessingFeaturesQCOM {
  StructureType sType;
  void *pNext;
  VkBool32 textureSampleWeighted;
  VkBool32 textureBoxFilter;
  VkBool32 textureBlockMatch;
};

struct PhysicalDeviceImageProcessingPropertiesQCOM {
  StructureType sType;
  void *pNext;
  uint32_t maxWeightFilterPhases;
  Extent2D maxWeightFilterDimension;
  Extent2D maxBlockMatchRegion;
  Extent2D maxBoxFilterBlockSize;
};

struct PhysicalDeviceTilePropertiesFeaturesQCOM {
  StructureType sType;
  void *pNext;
  VkBool32 tileProperties;
};

struct TilePropertiesQCOM {
  StructureType sType;
  void *pNext;
  Extent3D tileSize;
  Extent2D apronSize;
  Offset2D origin;
};

struct PhysicalDeviceAmigoProfilingFeaturesSEC {
  StructureType sType;
  void *pNext;
  VkBool32 amigoProfiling;
};

struct AmigoProfilingSubmitInfoSEC {
  StructureType sType;
  void *pNext;
  uint64_t firstDrawTimestamp;
  uint64_t swapBufferTimestamp;
};

struct PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 attachmentFeedbackLoopLayout;
};

struct PhysicalDeviceDepthClampZeroOneFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 depthClampZeroOne;
};

struct PhysicalDeviceAddressBindingReportFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 reportAddressBinding;
};

struct DeviceAddressBindingCallbackDataEXT {
  StructureType sType;
  void *pNext;
  DeviceAddressBindingMask flags;
  VkDeviceAddress baseAddress;
  VkDeviceSize size;
  DeviceAddressBindingType bindingType;
};

struct PhysicalDeviceOpticalFlowFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 opticalFlow;
};

struct PhysicalDeviceOpticalFlowPropertiesNV {
  StructureType sType;
  void *pNext;
  OpticalFlowGridSizeMask supportedOutputGridSizes;
  OpticalFlowGridSizeMask supportedHintGridSizes;
  VkBool32 hintSupported;
  VkBool32 costSupported;
  VkBool32 bidirectionalFlowSupported;
  VkBool32 globalFlowSupported;
  uint32_t minWidth;
  uint32_t minHeight;
  uint32_t maxWidth;
  uint32_t maxHeight;
  uint32_t maxNumRegionsOfInterest;
};

struct OpticalFlowImageFormatInfoNV {
  StructureType sType;
  void *pNext;
  OpticalFlowUsageMask usage;
};

struct OpticalFlowImageFormatPropertiesNV {
  StructureType sType;
  void *pNext;
  Format format;
};

struct OpticalFlowSessionCreateInfoNV {
  StructureType sType;
  void *pNext;
  uint32_t width;
  uint32_t height;
  Format imageFormat;
  Format flowVectorFormat;
  Format costFormat;
  OpticalFlowGridSizeMask outputGridSize;
  OpticalFlowGridSizeMask hintGridSize;
  OpticalFlowPerformanceLevel performanceLevel;
  OpticalFlowSessionCreateMask flags;
};

struct OpticalFlowSessionCreatePrivateDataInfoNV {
  StructureType sType;
  void *pNext;
  uint32_t id;
  uint32_t size;
  void *pPrivateData;
};

struct OpticalFlowExecuteInfoNV {
  StructureType sType;
  void *pNext;
  OpticalFlowExecuteMask flags;
  uint32_t regionCount;
  Rect2D *pRegions;
};

struct PhysicalDeviceFaultFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 deviceFault;
  VkBool32 deviceFaultVendorBinary;
};

struct DeviceFaultAddressInfoEXT {
  DeviceFaultAddressType addressType;
  VkDeviceAddress reportedAddress;
  VkDeviceSize addressPrecision;
};

struct DeviceFaultVendorInfoEXT {
  char description[VK_MAX_DESCRIPTION_SIZE];
  uint64_t vendorFaultCode;
  uint64_t vendorFaultData;
};

struct DeviceFaultCountsEXT {
  StructureType sType;
  void *pNext;
  uint32_t addressInfoCount;
  uint32_t vendorInfoCount;
  VkDeviceSize vendorBinarySize;
};

struct DeviceFaultInfoEXT {
  StructureType sType;
  void *pNext;
  char description[VK_MAX_DESCRIPTION_SIZE];
  DeviceFaultAddressInfoEXT *pAddressInfos;
  DeviceFaultVendorInfoEXT *pVendorInfos;
  void *pVendorBinaryData;
};

struct DeviceFaultVendorBinaryHeaderVersionOneEXT {
  uint32_t headerSize;
  DeviceFaultVendorBinaryHeaderVersion headerVersion;
  uint32_t vendorID;
  uint32_t deviceID;
  uint32_t driverVersion;
  uint8_t pipelineCacheUUID[VK_UUID_SIZE];
  uint32_t applicationNameOffset;
  uint32_t applicationVersion;
  uint32_t engineNameOffset;
  uint32_t engineVersion;
  uint32_t apiVersion;
};

struct PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 pipelineLibraryGroupHandles;
};

struct DepthBiasInfoEXT {
  StructureType sType;
  void *pNext;
  float depthBiasConstantFactor;
  float depthBiasClamp;
  float depthBiasSlopeFactor;
};

struct DepthBiasRepresentationInfoEXT {
  StructureType sType;
  void *pNext;
  DepthBiasRepresentation depthBiasRepresentation;
  VkBool32 depthBiasExact;
};

struct DecompressMemoryRegionNV {
  VkDeviceAddress srcAddress;
  VkDeviceAddress dstAddress;
  VkDeviceSize compressedSize;
  VkDeviceSize decompressedSize;
  MemoryDecompressionMethodMask decompressionMethod;
};

struct PhysicalDeviceShaderCoreBuiltinsPropertiesARM {
  StructureType sType;
  void *pNext;
  uint64_t shaderCoreMask;
  uint32_t shaderCoreCount;
  uint32_t shaderWarpsPerCore;
};

struct PhysicalDeviceShaderCoreBuiltinsFeaturesARM {
  StructureType sType;
  void *pNext;
  VkBool32 shaderCoreBuiltins;
};

struct FrameBoundaryEXT {
  StructureType sType;
  void *pNext;
  FrameBoundaryMask flags;
  uint64_t frameID;
  uint32_t imageCount;
  VkImage *pImages;
  uint32_t bufferCount;
  VkBuffer *pBuffers;
  uint64_t tagName;
  size_t tagSize;
  void *pTag;
};

struct PhysicalDeviceFrameBoundaryFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 frameBoundary;
};

struct PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 dynamicRenderingUnusedAttachments;
};

struct SurfacePresentModeEXT {
  StructureType sType;
  void *pNext;
  PresentMode presentMode;
};

struct SurfacePresentScalingCapabilitiesEXT {
  StructureType sType;
  void *pNext;
  PresentScalingMask supportedPresentScaling;
  PresentGravityMask supportedPresentGravityX;
  PresentGravityMask supportedPresentGravityY;
  Extent2D minScaledImageExtent;
  Extent2D maxScaledImageExtent;
};

struct SurfacePresentModeCompatibilityEXT {
  StructureType sType;
  void *pNext;
  uint32_t presentModeCount;
  PresentMode *pPresentModes;
};

struct PhysicalDeviceSwapchainMaintenance1FeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 swapchainMaintenance1;
};

struct SwapchainPresentFenceInfoEXT {
  StructureType sType;
  void *pNext;
  uint32_t swapchainCount;
  VkFence *pFences;
};

struct SwapchainPresentModesCreateInfoEXT {
  StructureType sType;
  void *pNext;
  uint32_t presentModeCount;
  PresentMode *pPresentModes;
};

struct SwapchainPresentModeInfoEXT {
  StructureType sType;
  void *pNext;
  uint32_t swapchainCount;
  PresentMode *pPresentModes;
};

struct SwapchainPresentScalingCreateInfoEXT {
  StructureType sType;
  void *pNext;
  PresentScalingMask scalingBehavior;
  PresentGravityMask presentGravityX;
  PresentGravityMask presentGravityY;
};

struct ReleaseSwapchainImagesInfoEXT {
  StructureType sType;
  void *pNext;
  VkSwapchainKHR swapchain;
  uint32_t imageIndexCount;
  uint32_t *pImageIndices;
};

struct PhysicalDeviceDepthBiasControlFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 depthBiasControl;
  VkBool32 leastRepresentableValueForceUnormRepresentation;
  VkBool32 floatRepresentation;
  VkBool32 depthBiasExact;
};

struct PhysicalDeviceRayTracingInvocationReorderFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 rayTracingInvocationReorder;
};

struct PhysicalDeviceRayTracingInvocationReorderPropertiesNV {
  StructureType sType;
  void *pNext;
  RayTracingInvocationReorderMode rayTracingInvocationReorderReorderingHint;
};

struct PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 extendedSparseAddressSpace;
};

struct PhysicalDeviceExtendedSparseAddressSpacePropertiesNV {
  StructureType sType;
  void *pNext;
  VkDeviceSize extendedSparseAddressSpaceSize;
  ImageUsageMask extendedSparseImageUsageFlags;
  BufferUsageMask extendedSparseBufferUsageFlags;
};

struct DirectDriverLoadingInfoLUNARG {
  StructureType sType;
  void *pNext;
  DirectDriverLoadingMask flags;
  PFN_vkGetInstanceProcAddrLUNARG pfnGetInstanceProcAddr;
};

struct DirectDriverLoadingListLUNARG {
  StructureType sType;
  void *pNext;
  DirectDriverLoadingMode mode;
  uint32_t driverCount;
  DirectDriverLoadingInfoLUNARG *pDrivers;
};

struct PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM {
  StructureType sType;
  void *pNext;
  VkBool32 multiviewPerViewViewports;
};

struct PhysicalDeviceRayTracingPositionFetchFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 rayTracingPositionFetch;
};

struct DeviceImageSubresourceInfoKHR {
  StructureType sType;
  void *pNext;
  ImageCreateInfo *pCreateInfo;
  ImageSubresource2KHR *pSubresource;
};

struct PhysicalDeviceShaderCorePropertiesARM {
  StructureType sType;
  void *pNext;
  uint32_t pixelRate;
  uint32_t texelRate;
  uint32_t fmaRate;
};

struct PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM {
  StructureType sType;
  void *pNext;
  VkBool32 multiviewPerViewRenderAreas;
};

struct MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM {
  StructureType sType;
  void *pNext;
  uint32_t perViewRenderAreaCount;
  Rect2D *pPerViewRenderAreas;
};

struct QueryLowLatencySupportNV {
  StructureType sType;
  void *pNext;
  void *pQueriedLowLatencyData;
};

struct MemoryMapInfoKHR {
  StructureType sType;
  void *pNext;
  MemoryMapMask flags;
  VkDeviceMemory memory;
  VkDeviceSize offset;
  VkDeviceSize size;
};

struct MemoryUnmapInfoKHR {
  StructureType sType;
  void *pNext;
  MemoryUnmapMask flags;
  VkDeviceMemory memory;
};

struct PhysicalDeviceShaderObjectFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 shaderObject;
};

struct PhysicalDeviceShaderObjectPropertiesEXT {
  StructureType sType;
  void *pNext;
  uint8_t shaderBinaryUUID[VK_UUID_SIZE];
  uint32_t shaderBinaryVersion;
};

struct ShaderCreateInfoEXT {
  StructureType sType;
  void *pNext;
  ShaderCreateMask flags;
  ShaderStageMaskBits stage;
  ShaderStageMask nextStage;
  ShaderCodeType codeType;
  size_t codeSize;
  void *pCode;
  char *pName;
  uint32_t setLayoutCount;
  VkDescriptorSetLayout *pSetLayouts;
  uint32_t pushConstantRangeCount;
  PushConstantRange *pPushConstantRanges;
  SpecializationInfo *pSpecializationInfo;
};

struct PhysicalDeviceShaderTileImageFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 shaderTileImageColorReadAccess;
  VkBool32 shaderTileImageDepthReadAccess;
  VkBool32 shaderTileImageStencilReadAccess;
};

struct PhysicalDeviceShaderTileImagePropertiesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 shaderTileImageCoherentReadAccelerated;
  VkBool32 shaderTileImageReadSampleFromPixelRateInvocation;
  VkBool32 shaderTileImageReadFromHelperInvocation;
};

struct PhysicalDeviceCooperativeMatrixFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 cooperativeMatrix;
  VkBool32 cooperativeMatrixRobustBufferAccess;
};

struct CooperativeMatrixPropertiesKHR {
  StructureType sType;
  void *pNext;
  uint32_t MSize;
  uint32_t NSize;
  uint32_t KSize;
  ComponentType AType;
  ComponentType BType;
  ComponentType CType;
  ComponentType ResultType;
  VkBool32 saturatingAccumulation;
  Scope scope;
};

struct PhysicalDeviceCooperativeMatrixPropertiesKHR {
  StructureType sType;
  void *pNext;
  ShaderStageMask cooperativeMatrixSupportedStages;
};

struct BindMemoryStatusKHR {
  StructureType sType;
  void *pNext;
  Result *pResult;
};

struct BindDescriptorSetsInfoKHR {
  StructureType sType;
  void *pNext;
  ShaderStageMask stageFlags;
  VkPipelineLayout layout;
  uint32_t firstSet;
  uint32_t descriptorSetCount;
  VkDescriptorSet *pDescriptorSets;
  uint32_t dynamicOffsetCount;
  uint32_t *pDynamicOffsets;
};

struct PushConstantsInfoKHR {
  StructureType sType;
  void *pNext;
  VkPipelineLayout layout;
  ShaderStageMask stageFlags;
  uint32_t offset;
  uint32_t size;
  void *pValues;
};

struct PushDescriptorSetInfoKHR {
  StructureType sType;
  void *pNext;
  ShaderStageMask stageFlags;
  VkPipelineLayout layout;
  uint32_t set;
  uint32_t descriptorWriteCount;
  WriteDescriptorSet *pDescriptorWrites;
};

struct PushDescriptorSetWithTemplateInfoKHR {
  StructureType sType;
  void *pNext;
  VkDescriptorUpdateTemplate descriptorUpdateTemplate;
  VkPipelineLayout layout;
  uint32_t set;
  void *pData;
};

struct SetDescriptorBufferOffsetsInfoEXT {
  StructureType sType;
  void *pNext;
  ShaderStageMask stageFlags;
  VkPipelineLayout layout;
  uint32_t firstSet;
  uint32_t setCount;
  uint32_t *pBufferIndices;
  VkDeviceSize *pOffsets;
};

struct BindDescriptorBufferEmbeddedSamplersInfoEXT {
  StructureType sType;
  void *pNext;
  ShaderStageMask stageFlags;
  VkPipelineLayout layout;
  uint32_t set;
};

struct PhysicalDeviceCubicClampFeaturesQCOM {
  StructureType sType;
  void *pNext;
  VkBool32 cubicRangeClamp;
};

struct PhysicalDeviceYcbcrDegammaFeaturesQCOM {
  StructureType sType;
  void *pNext;
  VkBool32 ycbcrDegamma;
};

struct SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM {
  StructureType sType;
  void *pNext;
  VkBool32 enableYDegamma;
  VkBool32 enableCbCrDegamma;
};

struct PhysicalDeviceCubicWeightsFeaturesQCOM {
  StructureType sType;
  void *pNext;
  VkBool32 selectableCubicWeights;
};

struct SamplerCubicWeightsCreateInfoQCOM {
  StructureType sType;
  void *pNext;
  CubicFilterWeights cubicWeights;
};

struct BlitImageCubicWeightsInfoQCOM {
  StructureType sType;
  void *pNext;
  CubicFilterWeights cubicWeights;
};

struct PhysicalDeviceImageProcessing2FeaturesQCOM {
  StructureType sType;
  void *pNext;
  VkBool32 textureBlockMatch2;
};

struct PhysicalDeviceImageProcessing2PropertiesQCOM {
  StructureType sType;
  void *pNext;
  Extent2D maxBlockMatchWindow;
};

struct SamplerBlockMatchWindowCreateInfoQCOM {
  StructureType sType;
  void *pNext;
  Extent2D windowExtent;
  BlockMatchWindowCompareMode windowCompareMode;
};

struct PhysicalDeviceDescriptorPoolOverallocationFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 descriptorPoolOverallocation;
};

struct PhysicalDeviceLayeredDriverPropertiesMSFT {
  StructureType sType;
  void *pNext;
  LayeredDriverUnderlyingApi underlyingAPI;
};

struct PhysicalDevicePerStageDescriptorSetFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 perStageDescriptorSet;
  VkBool32 dynamicPipelineLayout;
};

struct LatencySleepModeInfoNV {
  StructureType sType;
  void *pNext;
  VkBool32 lowLatencyMode;
  VkBool32 lowLatencyBoost;
  uint32_t minimumIntervalUs;
};

struct LatencySleepInfoNV {
  StructureType sType;
  void *pNext;
  VkSemaphore signalSemaphore;
  uint64_t value;
};

struct SetLatencyMarkerInfoNV {
  StructureType sType;
  void *pNext;
  uint64_t presentID;
  LatencyMarker marker;
};

struct LatencyTimingsFrameReportNV {
  StructureType sType;
  void *pNext;
  uint64_t presentID;
  uint64_t inputSampleTimeUs;
  uint64_t simStartTimeUs;
  uint64_t simEndTimeUs;
  uint64_t renderSubmitStartTimeUs;
  uint64_t renderSubmitEndTimeUs;
  uint64_t presentStartTimeUs;
  uint64_t presentEndTimeUs;
  uint64_t driverStartTimeUs;
  uint64_t driverEndTimeUs;
  uint64_t osRenderQueueStartTimeUs;
  uint64_t osRenderQueueEndTimeUs;
  uint64_t gpuRenderStartTimeUs;
  uint64_t gpuRenderEndTimeUs;
};

struct GetLatencyMarkerInfoNV {
  StructureType sType;
  void *pNext;
  uint32_t timingCount;
  LatencyTimingsFrameReportNV *pTimings;
};

struct OutOfBandQueueTypeInfoNV {
  StructureType sType;
  void *pNext;
  OutOfBandQueueType queueType;
};

struct LatencySubmissionPresentIdNV {
  StructureType sType;
  void *pNext;
  uint64_t presentID;
};

struct SwapchainLatencyCreateInfoNV {
  StructureType sType;
  void *pNext;
  VkBool32 latencyModeEnable;
};

struct LatencySurfaceCapabilitiesNV {
  StructureType sType;
  void *pNext;
  uint32_t presentModeCount;
  PresentMode *pPresentModes;
};

struct PhysicalDeviceCudaKernelLaunchFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 cudaKernelLaunchFeatures;
};

struct PhysicalDeviceCudaKernelLaunchPropertiesNV {
  StructureType sType;
  void *pNext;
  uint32_t computeCapabilityMinor;
  uint32_t computeCapabilityMajor;
};

struct DeviceQueueShaderCoreControlCreateInfoARM {
  StructureType sType;
  void *pNext;
  uint32_t shaderCoreCount;
};

struct PhysicalDeviceSchedulingControlsFeaturesARM {
  StructureType sType;
  void *pNext;
  VkBool32 schedulingControls;
};

struct PhysicalDeviceSchedulingControlsPropertiesARM {
  StructureType sType;
  void *pNext;
  PhysicalDeviceSchedulingControlsMask schedulingControlsFlags;
};

struct PhysicalDeviceRelaxedLineRasterizationFeaturesIMG {
  StructureType sType;
  void *pNext;
  VkBool32 relaxedLineRasterization;
};

struct PhysicalDeviceRenderPassStripedFeaturesARM {
  StructureType sType;
  void *pNext;
  VkBool32 renderPassStriped;
};

struct PhysicalDeviceRenderPassStripedPropertiesARM {
  StructureType sType;
  void *pNext;
  Extent2D renderPassStripeGranularity;
  uint32_t maxRenderPassStripes;
};

struct RenderPassStripeInfoARM {
  StructureType sType;
  void *pNext;
  Rect2D stripeArea;
};

struct RenderPassStripeBeginInfoARM {
  StructureType sType;
  void *pNext;
  uint32_t stripeInfoCount;
  RenderPassStripeInfoARM *pStripeInfos;
};

struct RenderPassStripeSubmitInfoARM {
  StructureType sType;
  void *pNext;
  uint32_t stripeSemaphoreInfoCount;
  SemaphoreSubmitInfo *pStripeSemaphoreInfos;
};

struct PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 shaderMaximalReconvergence;
};

struct PhysicalDeviceShaderSubgroupRotateFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 shaderSubgroupRotate;
  VkBool32 shaderSubgroupRotateClustered;
};

struct PhysicalDeviceShaderExpectAssumeFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 shaderExpectAssume;
};

struct PhysicalDeviceShaderFloatControls2FeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 shaderFloatControls2;
};

struct PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 dynamicRenderingLocalRead;
};

struct RenderingAttachmentLocationInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t colorAttachmentCount;
  uint32_t *pColorAttachmentLocations;
};

struct RenderingInputAttachmentIndexInfoKHR {
  StructureType sType;
  void *pNext;
  uint32_t colorAttachmentCount;
  uint32_t *pColorAttachmentInputIndices;
  uint32_t *pDepthInputAttachmentIndex;
  uint32_t *pStencilInputAttachmentIndex;
};

struct PhysicalDeviceShaderQuadControlFeaturesKHR {
  StructureType sType;
  void *pNext;
  VkBool32 shaderQuadControl;
};

struct PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 shaderFloat16VectorAtomics;
};

struct PhysicalDeviceMapMemoryPlacedFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 memoryMapPlaced;
  VkBool32 memoryMapRangePlaced;
  VkBool32 memoryUnmapReserve;
};

struct PhysicalDeviceMapMemoryPlacedPropertiesEXT {
  StructureType sType;
  void *pNext;
  VkDeviceSize minPlacedMemoryMapAlignment;
};

struct MemoryMapPlacedInfoEXT {
  StructureType sType;
  void *pNext;
  void *pPlacedAddress;
};

struct PhysicalDeviceRawAccessChainsFeaturesNV {
  StructureType sType;
  void *pNext;
  VkBool32 shaderRawAccessChains;
};

struct PhysicalDeviceImageAlignmentControlFeaturesMESA {
  StructureType sType;
  void *pNext;
  VkBool32 imageAlignmentControl;
};

struct PhysicalDeviceImageAlignmentControlPropertiesMESA {
  StructureType sType;
  void *pNext;
  uint32_t supportedImageAlignmentMask;
};

struct ImageAlignmentControlCreateInfoMESA {
  StructureType sType;
  void *pNext;
  uint32_t maximumRequestedAlignment;
};

struct PhysicalDeviceShaderReplicatedCompositesFeaturesEXT {
  StructureType sType;
  void *pNext;
  VkBool32 shaderReplicatedComposites;
};

} // end namespace Wolf

#endif // WOLF_STRUCTURES_H
