// This file is MACHINE GENERATED! Do not edit.

#ifndef TENSORFLOW_CC_OPS_LIST_OPS_H_
#define TENSORFLOW_CC_OPS_LIST_OPS_H_

// This file is MACHINE GENERATED! Do not edit.

#include "tensorflow/cc/framework/ops.h"
#include "tensorflow/cc/framework/scope.h"
#include "tensorflow/core/framework/tensor.h"
#include "tensorflow/core/framework/tensor_shape.h"
#include "tensorflow/core/framework/types.h"
#include "tensorflow/core/lib/gtl/array_slice.h"

namespace tensorflow {
namespace ops {

/// @defgroup list_ops List Ops
/// @{

/// Creates and returns an empty tensor list.
///
/// All list elements must be tensors of dtype element_dtype and shape compatible
/// with element_shape.
///
/// handle: an empty tensor list.
/// element_dtype: the type of elements in the list.
/// element_shape: a shape compatible with that of elements in the list.
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The handle tensor.
class EmptyTensorList {
 public:
  EmptyTensorList(const ::tensorflow::Scope& scope, ::tensorflow::Input
                element_shape, ::tensorflow::Input max_num_elements, DataType
                element_dtype);
  operator ::tensorflow::Output() const { return handle; }
  operator ::tensorflow::Input() const { return handle; }
  ::tensorflow::Node* node() const { return handle.node(); }

  Operation operation;
  ::tensorflow::Output handle;
};

/// Concats all tensors in the list along the 0th dimension.
///
/// Requires that all tensors have the same shape except the first dimension.
///
/// input_handle: The input list.
/// tensor: The concated result.
/// lengths: Output tensor containing sizes of the 0th dimension of tensors in the list, used for computing the gradient.
///
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output` tensor
/// * `Output` lengths
class TensorListConcat {
 public:
  TensorListConcat(const ::tensorflow::Scope& scope, ::tensorflow::Input
                 input_handle, DataType element_dtype);

  Operation operation;
  ::tensorflow::Output tensor;
  ::tensorflow::Output lengths;
};

/// TODO: add doc.
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The output tensor.
class TensorListConcatLists {
 public:
  TensorListConcatLists(const ::tensorflow::Scope& scope, ::tensorflow::Input
                      input_a, ::tensorflow::Input input_b, DataType
                      element_dtype);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  Operation operation;
  ::tensorflow::Output output;
};

/// The shape of the elements of the given list, as a tensor.
///
///   input_handle: the list
///   element_shape: the shape of elements of the list
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The element_shape tensor.
class TensorListElementShape {
 public:
  TensorListElementShape(const ::tensorflow::Scope& scope, ::tensorflow::Input
                       input_handle, DataType shape_type);
  operator ::tensorflow::Output() const { return element_shape; }
  operator ::tensorflow::Input() const { return element_shape; }
  ::tensorflow::Node* node() const { return element_shape.node(); }

  Operation operation;
  ::tensorflow::Output element_shape;
};

/// Creates a TensorList which, when stacked, has the value of `tensor`.
///
/// Each tensor in the result list corresponds to one row of the input tensor.
///
/// tensor: The input tensor.
/// output_handle: The list.
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The output_handle tensor.
class TensorListFromTensor {
 public:
  TensorListFromTensor(const ::tensorflow::Scope& scope, ::tensorflow::Input
                     tensor, ::tensorflow::Input element_shape);
  operator ::tensorflow::Output() const { return output_handle; }
  operator ::tensorflow::Input() const { return output_handle; }
  ::tensorflow::Node* node() const { return output_handle.node(); }

  Operation operation;
  ::tensorflow::Output output_handle;
};

/// Creates a Tensor by indexing into the TensorList.
///
/// Each row in the produced Tensor corresponds to the element in the TensorList
/// specified by the given index (see `tf.gather`).
///
/// input_handle: The input tensor list.
/// indices: The indices used to index into the list.
/// values: The tensor.
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The values tensor.
class TensorListGather {
 public:
  TensorListGather(const ::tensorflow::Scope& scope, ::tensorflow::Input
                 input_handle, ::tensorflow::Input indices, DataType
                 element_dtype);
  operator ::tensorflow::Output() const { return values; }
  operator ::tensorflow::Input() const { return values; }
  ::tensorflow::Node* node() const { return values.node(); }

  Operation operation;
  ::tensorflow::Output values;
};

/// TODO: add doc.
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The item tensor.
class TensorListGetItem {
 public:
  TensorListGetItem(const ::tensorflow::Scope& scope, ::tensorflow::Input
                  input_handle, ::tensorflow::Input index, DataType
                  element_dtype);
  operator ::tensorflow::Output() const { return item; }
  operator ::tensorflow::Input() const { return item; }
  ::tensorflow::Node* node() const { return item.node(); }

  Operation operation;
  ::tensorflow::Output item;
};

/// Returns the number of tensors in the input tensor list.
///
/// input_handle: the input list
/// length: the number of tensors in the list
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The length tensor.
class TensorListLength {
 public:
  TensorListLength(const ::tensorflow::Scope& scope, ::tensorflow::Input
                 input_handle);
  operator ::tensorflow::Output() const { return length; }
  operator ::tensorflow::Input() const { return length; }
  ::tensorflow::Node* node() const { return length.node(); }

  Operation operation;
  ::tensorflow::Output length;
};

/// Returns the last element of the input list as well as a list with all but that element.
///
/// Fails if the list is empty.
///
/// input_handle: the input list
/// tensor: the withdrawn last element of the list
/// element_dtype: the type of elements in the list
/// element_shape: the shape of the output tensor
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output` output_handle
/// * `Output` tensor
class TensorListPopBack {
 public:
  TensorListPopBack(const ::tensorflow::Scope& scope, ::tensorflow::Input
                  input_handle, DataType element_dtype);

  Operation operation;
  ::tensorflow::Output output_handle;
  ::tensorflow::Output tensor;
};

/// Returns a list list which has the passed-in `Tensor` as last element and the other elements of the given list in `input_handle`.
///
/// tensor: The tensor to put on the list.
/// input_handle: The old list.
/// output_handle: A list with the elements of the old list followed by tensor.
/// element_dtype: the type of elements in the list.
/// element_shape: a shape compatible with that of elements in the list.
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The output_handle tensor.
class TensorListPushBack {
 public:
  TensorListPushBack(const ::tensorflow::Scope& scope, ::tensorflow::Input
                   input_handle, ::tensorflow::Input tensor);
  operator ::tensorflow::Output() const { return output_handle; }
  operator ::tensorflow::Input() const { return output_handle; }
  ::tensorflow::Node* node() const { return output_handle.node(); }

  Operation operation;
  ::tensorflow::Output output_handle;
};

/// TODO: add doc.
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The output_handles tensor.
class TensorListPushBackBatch {
 public:
  TensorListPushBackBatch(const ::tensorflow::Scope& scope, ::tensorflow::Input
                        input_handles, ::tensorflow::Input tensor);
  operator ::tensorflow::Output() const { return output_handles; }
  operator ::tensorflow::Input() const { return output_handles; }
  ::tensorflow::Node* node() const { return output_handles.node(); }

  Operation operation;
  ::tensorflow::Output output_handles;
};

/// List of the given size with empty elements.
///
/// element_shape: the shape of the future elements of the list
/// num_elements: the number of elements to reserve
/// handle: the output list
/// element_dtype: the desired type of elements in the list.
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The handle tensor.
class TensorListReserve {
 public:
  TensorListReserve(const ::tensorflow::Scope& scope, ::tensorflow::Input
                  element_shape, ::tensorflow::Input num_elements, DataType
                  element_dtype);
  operator ::tensorflow::Output() const { return handle; }
  operator ::tensorflow::Input() const { return handle; }
  ::tensorflow::Node* node() const { return handle.node(); }

  Operation operation;
  ::tensorflow::Output handle;
};

/// Creates a TensorList by indexing into a Tensor.
///
/// Each member of the TensorList corresponds to one row of the input tensor,
/// specified by the given index (see `tf.gather`).
///
/// tensor: The input tensor.
/// indices: The indices used to index into the list.
/// element_shape: The shape of the elements in the list (can be less specified than
///   the shape of the tensor).
/// output_handle: The TensorList.
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The output_handle tensor.
class TensorListScatter {
 public:
  TensorListScatter(const ::tensorflow::Scope& scope, ::tensorflow::Input tensor,
                  ::tensorflow::Input indices, ::tensorflow::Input
                  element_shape);
  operator ::tensorflow::Output() const { return output_handle; }
  operator ::tensorflow::Input() const { return output_handle; }
  ::tensorflow::Node* node() const { return output_handle.node(); }

  Operation operation;
  ::tensorflow::Output output_handle;
};

/// TODO: add doc.
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The output_handle tensor.
class TensorListSetItem {
 public:
  TensorListSetItem(const ::tensorflow::Scope& scope, ::tensorflow::Input
                  input_handle, ::tensorflow::Input index, ::tensorflow::Input
                  item);
  operator ::tensorflow::Output() const { return output_handle; }
  operator ::tensorflow::Input() const { return output_handle; }
  ::tensorflow::Node* node() const { return output_handle.node(); }

  Operation operation;
  ::tensorflow::Output output_handle;
};

/// Splits a tensor into a list.
///
/// list[i] corresponds to lengths[i] tensors from the input tensor.
/// The tensor must have rank at least 1 and contain exactly sum(lengths) elements.
///
/// tensor: The input tensor.
/// element_shape: A shape compatible with that of elements in the tensor.
/// lengths: Vector of sizes of the 0th dimension of tensors in the list.
/// output_handle: The list.
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The output_handle tensor.
class TensorListSplit {
 public:
  TensorListSplit(const ::tensorflow::Scope& scope, ::tensorflow::Input tensor,
                ::tensorflow::Input element_shape, ::tensorflow::Input lengths);
  operator ::tensorflow::Output() const { return output_handle; }
  operator ::tensorflow::Input() const { return output_handle; }
  ::tensorflow::Node* node() const { return output_handle.node(); }

  Operation operation;
  ::tensorflow::Output output_handle;
};

/// Stacks all tensors in the list.
///
/// Requires that all tensors have the same shape.
///
/// input_handle: the input list
/// tensor: the gathered result
/// num_elements: optional. If not -1, the number of elements in the list.
///
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The tensor tensor.
class TensorListStack {
 public:
  /// Optional attribute setters for TensorListStack
  struct Attrs {
    /// Defaults to -1
    TF_MUST_USE_RESULT Attrs NumElements(int64 x) {
      Attrs ret = *this;
      ret.num_elements_ = x;
      return ret;
    }

    int64 num_elements_ = -1;
  };
  TensorListStack(const ::tensorflow::Scope& scope, ::tensorflow::Input
                input_handle, DataType element_dtype);
  TensorListStack(const ::tensorflow::Scope& scope, ::tensorflow::Input
                input_handle, DataType element_dtype, const
                TensorListStack::Attrs& attrs);
  operator ::tensorflow::Output() const { return tensor; }
  operator ::tensorflow::Input() const { return tensor; }
  ::tensorflow::Node* node() const { return tensor.node(); }

  static Attrs NumElements(int64 x) {
    return Attrs().NumElements(x);
  }

  Operation operation;
  ::tensorflow::Output tensor;
};

/// @}

}  // namespace ops
}  // namespace tensorflow

#endif  // TENSORFLOW_CC_OPS_LIST_OPS_H_
