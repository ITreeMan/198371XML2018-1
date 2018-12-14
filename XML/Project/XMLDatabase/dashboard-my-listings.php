<!DOCTYPE html>

<head>

	<!-- Basic Page Needs
================================================== -->
	<title>Listeo</title>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1">

	<!-- CSS
================================================== -->
	<link rel="stylesheet" href="css/style.css">
	<link rel="stylesheet" href="css/colors/main.css" id="colors">

</head>

<body>

	<!-- Wrapper -->
	<div id="wrapper">

		<!-- Header Container
================================================== -->
		<header id="header-container" class="fixed fullwidth dashboard">

			<!-- Header -->
			<div id="header" class="not-sticky">
				<div class="container">

					<!-- Left Side Content -->
					<div class="left-side">

						<!-- Logo -->
						<div id="logo">
							<a href="index.html"><img src="images/logo.png" alt=""></a>
							<a href="index.html" class="dashboard-logo"><img src="images/logo2.png" alt=""></a>
						</div>

						<!-- Mobile Navigation -->
						<div class="mmenu-trigger">
							<button class="hamburger hamburger--collapse" type="button">
								<span class="hamburger-box">
									<span class="hamburger-inner"></span>
								</span>
							</button>
						</div>

						<!-- Main Navigation -->
						<nav id="navigation" class="style-1">
								<ul id="responsive">
			
									<li><a  href="index.php">Home</a>
			
									</li>
			
									<li><a  href="pages-contact.html">Contact</a>
									</li>
			
								</ul>
							</nav>
						<div class="clearfix"></div>
						<!-- Main Navigation / End -->

					</div>
					<!-- Left Side Content / End -->

					<!-- Right Side Content / End -->
					<div class="right-side">
						<!-- Header Widget -->
						<div class="header-widget">

							<!-- User Menu -->
							<div class="user-menu">
								<ul>
									<li><a href="dashboard.html"><i class="sl sl-icon-settings"></i> Dashboard</a></li>
									<li><a href="dashboard-messages.html"><i class="sl sl-icon-envelope-open"></i> Messages</a></li>
									<li><a href="dashboard-bookings.html"><i class="fa fa-calendar-check-o"></i> Bookings</a></li>
									<li><a href="index.html"><i class="sl sl-icon-power"></i> Logout</a></li>
								</ul>
							</div>

							<a href="dashboard-add-listing.html" class="button border with-icon">Add Listing <i class="sl sl-icon-plus"></i></a>
						</div>
						<!-- Header Widget / End -->
					</div>
					<!-- Right Side Content / End -->

				</div>
			</div>
			<!-- Header / End -->

		</header>
		<div class="clearfix"></div>
		<!-- Header Container / End -->


		<!-- Dashboard -->
		<div id="dashboard">

			<!-- Navigation
	================================================== -->

			<!-- Responsive Navigation Trigger -->
			<a href="#" class="dashboard-responsive-nav-trigger"><i class="fa fa-reorder"></i> Dashboard Navigation</a>

			<div class="dashboard-nav">
					<div class="dashboard-nav-inner">

							<ul data-submenu-title="Account">
								<li><a href="dashboard-add-listing.html"><i class="sl sl-icon-power"></i> Add Listing</a></li>
								<li><a href="dashboard-my-listings.html"><i class="sl sl-icon-power"></i> Edit</a></li>
								<li><a href="index.html"><i class="sl sl-icon-power"></i> Logout</a></li>
							</ul>
		
						</div>
			</div>
			<!-- Navigation / End -->


			<!-- Content
	================================================== -->
			<div class="dashboard-content">

				<!-- Titlebar -->
				<div id="titlebar">
					<div class="row">
						<div class="col-md-12">
							<h2>My Listings</h2>
							<!-- Breadcrumbs -->
							<nav id="breadcrumbs">
								<ul>
									<li><a href="#">Home</a></li>
									<li><a href="#">Dashboard</a></li>
									<li>My Listings</li>
								</ul>
							</nav>
						</div>
					</div>
				</div>

				<div class="row">

					<!-- Listings -->
			<?php 

				require'./contactDB.php';
				$sql="select*from product";
				$result = mysqli_query($con,$sql);
				$count = mysqli_num_rows($result);

				echo '<div class="col-lg-12 col-md-12">';
				echo '<div class="dashboard-list-box margin-top-0">';
					echo '<h4>Active Listings</h4>';
				for ($i =0; $i < $count; $i++) {
					$row = mysqli_fetch_object($result);

							

							
									echo '<div class="list-box-listing">';
										echo '<div class="list-box-listing-img">'.'<a href=edit'.$row->product_id.'php'.'><img src="picInput/'.$row->pic1.'" alt=""></a></div>';
										echo "<div class="."list-box-listing-content".">";
											echo '<div class="inner">';
												echo '<h3><a href="#">'. $row->g_name.'</a></h3>';
												echo '<span>'.$row->address. $row->province.'</span>';
												echo '</div>';
											echo '</div>';
										echo '</div>';
										echo "<div class="."buttons-to-right".">";
										echo "<a href="."#". "class="."button gray"."><i class="."sl sl-icon-note"."></i> Edit</a>";
										echo "<a href="."#"." class="."button gray"."><i class=". " sl sl-icon-close "."></i> Delete</a>";
										echo '</div>';

				}
					?>



					<!-- Copyrights -->
					<div class="col-md-12">
						<!-- <div class="copyrights">© 2017 Listeo. All Rights Reserved.</div> -->
					</div>
				</div>

			</div>
			<!-- Content / End -->


		</div>
		<!-- Dashboard / End -->


	</div>
	<!-- Wrapper / End -->


	<!-- Scripts
================================================== -->
	<script type="text/javascript" src="scripts/jquery-2.2.0.min.js"></script>
	<script type="text/javascript" src="scripts/mmenu.min.js"></script>
	<script type="text/javascript" src="scripts/chosen.min.js"></script>
	<script type="text/javascript" src="scripts/slick.min.js"></script>
	<script type="text/javascript" src="scripts/rangeslider.min.js"></script>
	<script type="text/javascript" src="scripts/magnific-popup.min.js"></script>
	<script type="text/javascript" src="scripts/waypoints.min.js"></script>
	<script type="text/javascript" src="scripts/counterup.min.js"></script>
	<script type="text/javascript" src="scripts/jquery-ui.min.js"></script>
	<script type="text/javascript" src="scripts/tooltips.min.js"></script>
	<script type="text/javascript" src="scripts/custom.js"></script>


</body>

</html>