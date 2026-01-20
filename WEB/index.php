<?php
$allowed_exts = ['php'];
$max_size = 1 * 1024 * 1024;  // 1 Mo

if ($_SERVER['REQUEST_METHOD'] === 'POST' && !empty($_FILES['file-upload'])) {
    $file = $_FILES['file-upload'];
    $file_ext = strtolower(pathinfo($file['name'], PATHINFO_EXTENSION));
    $file_size = $file['size'];

    // Vérifie l'extension de fichier
    if (!in_array($file_ext, $allowed_exts)) {
        die("Le type de fichier n'est pas autorisé.");
    }

    // Vérifie la taille du fichier
    if ($file_size > $max_size) {
        die("Le fichier est trop volumineux.");
    }

    // Le fichier est valide, déplacez-le vers votre dossier de destination
    move_uploaded_file($file['tmp_name'], '/usr/share/nginx/html/uploads/' . $file['name']);
    $file_url = 'http://' . $_SERVER['HTTP_HOST'] . '/uploads/' . $file['name'];
    echo "Upload done. Your file can be found here: <a href=\"$file_url\">$file_url</a>";
}
?>
