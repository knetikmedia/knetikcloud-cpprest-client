/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * UsersAddressesApi.h
 *
 * 
 */

#ifndef UsersAddressesApi_H_
#define UsersAddressesApi_H_


#include "ApiClient.h"

#include "PageResource«SavedAddressResource».h"
#include "Result.h"
#include "SavedAddressResource.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  UsersAddressesApi
{
public:
    UsersAddressesApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~UsersAddressesApi();
    /// <summary>
    /// Create a new address
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The id of the user</param>/// <param name="savedAddressResource">The new address (optional)</param>
    pplx::task<std::shared_ptr<SavedAddressResource>> createAddress(utility::string_t userId, std::shared_ptr<SavedAddressResource> savedAddressResource);
    /// <summary>
    /// Delete an address
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The id of the user</param>/// <param name="id">The id of the address</param>
    pplx::task<void> deleteAddress(utility::string_t userId, int32_t id);
    /// <summary>
    /// Get a single address
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The id of the user</param>/// <param name="id">The id of the address</param>
    pplx::task<std::shared_ptr<SavedAddressResource>> getAddress(utility::string_t userId, int32_t id);
    /// <summary>
    /// List and search addresses
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The id of the user</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«SavedAddressResource»>> getAddresses(utility::string_t userId, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Update an address
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The id of the user</param>/// <param name="id">The id of the address</param>/// <param name="savedAddressResource">The saved address resource object (optional)</param>
    pplx::task<std::shared_ptr<SavedAddressResource>> updateAddress(utility::string_t userId, int32_t id, std::shared_ptr<SavedAddressResource> savedAddressResource);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* UsersAddressesApi_H_ */

