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
 * Payments_OptimalApi.h
 *
 * 
 */

#ifndef Payments_OptimalApi_H_
#define Payments_OptimalApi_H_


#include "ApiClient.h"

#include "OptimalPaymentRequest.h"
#include "Result.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  Payments_OptimalApi
{
public:
    Payments_OptimalApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~Payments_OptimalApi();
    /// <summary>
    /// Initiate silent post with Optimal
    /// </summary>
    /// <remarks>
    /// Will return the url for a hosted payment endpoint to post to. See Optimal documentation for details. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; OPTIMAL_ADMIN or owner
    /// </remarks>
    /// <param name="request">The payment request to initiate (optional)</param>
    pplx::task<utility::string_t> silentPostOptimal(std::shared_ptr<OptimalPaymentRequest> request);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* Payments_OptimalApi_H_ */
