#pragma once

#include "NObjectWrapper.h"
#include <normObject.h>

namespace NormNET
{
    /// <summary>
    ///     Represents a unique norm object identifier.
    /// </summary>
    public ref class NNormObjectId : public NObjectWrapper<NormObjectId>
    {
    public:
        /// <summary>
        ///     Creates a new <see cref="NormObjectId" />
        /// </summary>
        NNormObjectId();
        /// <summary>
        ///      Creates a new <see cref="NormObjectId" />
        /// </summary>
        /// <param name="id">The value of the id.</param>
        NNormObjectId(UINT16 id);
        /// <summary>
        ///      Creates a new <see cref="NormObjectId" />
        /// </summary>
        /// <param name="id">An existing it to copy.</param>
        NNormObjectId(NNormObjectId^ id);

        /// <summary>
        ///     Casts the <see cref="NormObjectId" /> to it's value.
        /// </summary>
        explicit operator UINT16();

        /// <summary>
        ///     Returns whether the current <see cref="NormObjectId" /> is less than the specified <see cref="NormObjectId" />.
        /// </summary>
        /// <param name="id">The <see cref="NormObjectId" />.</param>
        /// <returns>
        ///     True if the current <see cref="NormObjectId" /> is less than the specified <see cref="NormObjectId" />,
        ///     otherwise false.
        /// </returns>
        bool operator<(NNormObjectId^ id);

        /// <summary>
        ///     Returns whether the current <see cref="NormObjectId" /> is greater than the specified <see cref="NormObjectId" />.
        /// </summary>
        /// <param name="id">The <see cref="NormObjectId" />.</param>
        /// <returns>
        ///     True if the current <see cref="NormObjectId" /> is greater than the specified <see cref="NormObjectId" />,
        ///     otherwise false.
        /// </returns>
        bool operator>(NNormObjectId^ id);

        /// <summary>
        ///     Returns whether the current <see cref="NormObjectId" /> is less than or equal to the specified <see cref="NormObjectId" />.
        /// </summary>
        /// <param name="id">The <see cref="NormObjectId" />.</param>
        /// <returns>
        ///     True if the current <see cref="NormObjectId" /> is less than or equal to the specified <see cref="NormObjectId" />,
        ///     otherwise false.
        /// </returns>
        bool operator<=(NNormObjectId^ id);

        /// <summary>
        ///     Returns whether the current <see cref="NormObjectId" /> is greater than or equal to the specified <see cref="NormObjectId" />.
        /// </summary>
        /// <param name="id">The <see cref="NormObjectId" />.</param>
        /// <returns>
        ///     True if the current <see cref="NormObjectId" /> is greater than or equal to the specified <see cref="NormObjectId" />,
        ///     otherwise false.
        /// </returns>
        bool operator>=(NNormObjectId^ id);

        /// <summary>
        ///     Returns whether the current <see cref="NormObjectId" /> is equal to the specified <see cref="NormObjectId" />.
        /// </summary>
        /// <param name="id">The <see cref="NormObjectId" />.</param>
        /// <returns>
        ///     True if the current <see cref="NormObjectId" /> is equal to the specified <see cref="NormObjectId" />,
        ///     otherwise false.
        /// </returns>
        bool operator==(NNormObjectId^ id);

        /// <summary>
        ///     Returns whether the current <see cref="NormObjectId" /> is not equal to the specified <see cref="NormObjectId" />.
        /// </summary>
        /// <param name="id">The <see cref="NormObjectId" />.</param>
        /// <returns>
        ///     True if the current <see cref="NormObjectId" /> is is not equal to the specified <see cref="NormObjectId" />,
        ///     otherwise false.
        /// </returns>
        bool operator!=(NNormObjectId^ id);

        /// <summary>
        ///     Subtracts the specified value form the id.
        /// </summary>
        /// <param name="delta">The value to subtract.</param>
        void operator-=(UINT16 delta);

        /// <summary>
        ///     Gets the underlying value pointer.
        /// </summary>
        /// <returns>The underlying value pointer.</returns>
        const char* GetValuePtr();

        /// <summary>
        ///     Increments the id.
        /// </summary>
        /// <returns>The incremented id.</returns>
        NNormObjectId^ operator++(int);

        /// <summary>
       ///     Decrements the id.
       /// </summary>
       /// <returns>The decremented id.</returns>
        NNormObjectId^ operator--(int);
    };
}