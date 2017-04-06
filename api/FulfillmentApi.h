/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * FulfillmentApi.h
 *
 * 
 */

#ifndef FulfillmentApi_H_
#define FulfillmentApi_H_


#include "ApiClient.h"

#include "FulfillmentType.h"
#include "PageResource«FulfillmentType».h"
#include "Result.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  FulfillmentApi
{
public:
    FulfillmentApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~FulfillmentApi();
    /// <summary>
    /// Create a fulfillment type
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="type">The fulfillment type (optional)</param>
    pplx::task<std::shared_ptr<FulfillmentType>> createFulfillmentType(std::shared_ptr<FulfillmentType> type);
    /// <summary>
    /// Delete a fulfillment type
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id</param>
    pplx::task<void> deleteFulfillmentType(int32_t id);
    /// <summary>
    /// Get a single fulfillment type
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id</param>
    pplx::task<std::shared_ptr<FulfillmentType>> getFulfillmentType(int32_t id);
    /// <summary>
    /// List and search fulfillment types
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«FulfillmentType»>> getFulfillmentTypes(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Update a fulfillment type
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id</param>/// <param name="fulfillmentType">The fulfillment type (optional)</param>
    pplx::task<void> updateFulfillmentType(int32_t id, std::shared_ptr<FulfillmentType> fulfillmentType);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* FulfillmentApi_H_ */

