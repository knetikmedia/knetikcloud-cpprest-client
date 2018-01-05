/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * UtilSecurityApi.h
 *
 * 
 */

#ifndef UtilSecurityApi_H_
#define UtilSecurityApi_H_


#include "ApiClient.h"

#include "PageResource«LocationLogResource».h"
#include "Result.h"
#include "TokenDetailsResource.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  UtilSecurityApi
{
public:
    UtilSecurityApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~UtilSecurityApi();
    /// <summary>
    /// Returns the authentication log for a user
    /// </summary>
    /// <remarks>
    /// A log entry is recorded everytime a user requests a new token. Standard pagination available
    /// </remarks>
    /// <param name="userId">The user id (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)</param>
    pplx::task<std::shared_ptr<PageResource«LocationLogResource»>> getUserLocationLog(int32_t userId, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Returns the authentication token details. Use /users endpoint for detailed user&#39;s info
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    
    pplx::task<std::shared_ptr<TokenDetailsResource>> getUserTokenDetails();

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* UtilSecurityApi_H_ */
